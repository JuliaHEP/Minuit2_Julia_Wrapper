#include "jlcxx/jlcxx.hpp"
#include "jlcxx/functions.hpp"
#include "Minuit2/FunctionMinimum.h"
#include "Minuit2/MnMigrad.h"
#include "Minuit2/FCNBase.h"
#include <iostream>

using namespace ROOT::Minuit2;

class JuliaFcn : public FCNBase{
    public:
    JuliaFcn(
        jlcxx::SafeCFunction func,
        jlcxx::ArrayRef<double> meas,
        jlcxx::ArrayRef<double> pos,
        jlcxx::ArrayRef<double> mvar
    ) : m_func(func),
        m_errorDef(1.0)
    {
        for (auto m : meas) m_measurements.push_back(m);
        for (auto p : pos) m_positions.push_back(p);
        for (auto m : mvar) m_variances.push_back(m);
    }
    virtual double Up() const {
        return m_errorDef;
    }
    virtual double operator()(const std::vector<double>& par) const {
        auto f = jlcxx::make_function_pointer<double(std::vector<double>, double)>(m_func);
        double chi2 = 0.;
        for (size_t n = 0; n < m_measurements.size(); n++) {
            double deltaY = f(par, m_positions[n]) - m_measurements[n];
            chi2 += (deltaY*deltaY) / m_variances[n];
        }
        return chi2;
    }
    std::vector<double> measurements() const {
        return m_measurements;
    }
    std::vector<double> positions() const {
        return m_positions;
    }
    std::vector<double> variances() const {
        return m_variances;
    }
    void setErrorDef(double def) {
        m_errorDef = def;
    }
    private:
    jlcxx::SafeCFunction m_func; // the function, from the julia side
    std::vector<double> m_positions; // x
    std::vector<double> m_measurements; // y
    std::vector<double> m_variances; // measurement variances
    double m_errorDef; // error definition (chi2 or logL)
};


JLCXX_MODULE define_julia_module(jlcxx::Module &minuit2)
{
    minuit2.method("testCallback", [](double(*func)(const std::vector<double>), const std::vector<double> parameters) {
        return func(parameters);
    });

    minuit2.add_type<JuliaFcn>("JuliaFcn")
        .constructor<jlcxx::SafeCFunction, jlcxx::ArrayRef<double>, jlcxx::ArrayRef<double>, jlcxx::ArrayRef<double>>();

    minuit2.method("fit", [](JuliaFcn& fcn, jlcxx::ArrayRef<double> pars) {
        VariableMetricMinimizer theMinimizer;
        // demonstrate minimal required interface for minimization
        // create Minuit parameters without names
        // starting values for parameters
        std::vector<double> init_par;
        for (auto p : pars) init_par.push_back(p);

        // starting values for initial uncertainties
        std::vector<double> init_err = {0.1, 0.1, 0.1};

        // minimize
        FunctionMinimum min =
            theMinimizer.Minimize(fcn, init_par, init_err);
        const double* data = min.Parameters().Vec().Data();
        for (size_t idx=0; idx<pars.size(); ++idx) {
            pars[idx] = data[idx]; 
        }
    });

}

// #include "GaussFcn.h"
// #include "GaussDataGen.h"
// #include "Minuit/FunctionMinimum.h"
// #include "Minuit/MnUserParameterState.h"
// #include "Minuit/MinimumPrint.h"
// #include "Minuit/MnMigrad.h"
// #include "Minuit/MnMinos.h"
// #include "Minuit/MnContours.h"
// #include "Minuit/MnPlot.h"
// #include <iostream>
// int main()
// {
//   // generate the data (100 data points)
//   GaussDataGen gdg(100);
//   std::vector<double> pos = gdg.positions();
//   std::vector<double> meas = gdg.measurements();
//   std::vector<double> var = gdg.variances();
//   // create FCN function
//   GaussFcn theFCN(meas, pos, var);
//   // create initial starting values for parameters
//   double x = 0.;
//   double x2 = 0.;
//   double norm = 0.;
//   double dx = pos[1] - pos[0];
//   double area = 0.;
//   for (unsigned int i = 0; i < meas.size(); i++)
//   {
//     norm += meas[i];
//     x += (meas[i] * pos[i]);
//     x2 += (meas[i] * pos[i] * pos[i]);
//     area += dx * meas[i];
//   }
//   double mean = x / norm;
//   double rms2 = x2 / norm - mean * mean;
//   double rms = rms2 > 0. ? sqrt(rms2) : 1.;
//   {
//     // demonstrate minimal required interface for minimization
//     // create Minuit parameters without names
//     // starting values for parameters
//     std::vector<double> init_par;
//     init_par.push_back(mean);
//     init_par.push_back(rms);
//     init_par.push_back(area);
//     // starting values for initial uncertainties
//     std::vector<double> init_err;
//     init_err.push_back(0.1);
//     init_err.push_back(0.1);
//     init_err.push_back(0.1);
//     // create minimizer (default constructor)
//     VariableMetricMinimizer theMinimizer;

//     // minimize
//     FunctionMinimum min =
//         theMinimizer.minimize(theFCN, init_par, init_err);
//     // output
//     std::cout << "minimum: " << min << std::endl;
//   }
//   {
//     // demonstrate standard minimization using MIGRAD
//     // create Minuit parameters with names
//     MnUserParameters upar;
//     upar.add("mean", mean, 0.1);
//     upar.add("sigma", rms, 0.1);
//     upar.add("area", area, 0.1);
//     // create MIGRAD minimizer
//     MnMigrad migrad(theFCN, upar);
//     // minimize
//     FunctionMinimum min = migrad();
//     // output
//     std::cout << "minimum: " << min << std::endl;
//   }
//   {
//     // demonstrate full interaction with parameters over subsequent
//     // minimizations
//     // create Minuit parameters with names
//     MnUserParameters upar;
//     upar.add("mean", mean, 0.1);
//     upar.add("sigma", rms, 0.1);
//     upar.add("area", area, 0.1);
//     // access parameter by name to set limits...
//     upar.setLimits("mean", mean - 0.01, mean + 0.01);
//     // ... or access parameter by index
//     upar.setLimits(1, rms - 0.1, rms + 0.1);
//     // create Migrad minimizer
//     MnMigrad migrad(theFCN, upar);
//     // fix a parameter...
//     migrad.fix("mean");
//     // ... and minimize
//     FunctionMinimum min = migrad();
//     // output
//     std::cout << "minimum: " << min << std::endl;
//     // release a parameter...
//     migrad.release("mean");
//     // ... and fix another one
//     migrad.fix(1);
//     // and minimize again
//     FunctionMinimum min1 = migrad();

//     // output
//     std::cout << "minimum1: " << min1 << std::endl;
//     // release the parameter...
//     migrad.release(1);
//     // ... and minimize with all three parameters
//     // (still with limits!)
//     FunctionMinimum min2 = migrad();
//     // output
//     std::cout << "minimum2: " << min2 << std::endl;
//     // remove all limits on parameters...
//     migrad.removeLimits("mean");
//     migrad.removeLimits("sigma");
//     // ... and minimize again with all three parameters
//     // (now without limits!)
//     FunctionMinimum min3 = migrad();
//     // output
//     std::cout << "minimum3: " << min3 << std::endl;
//   }
//   {
//     // demonstrate MINOS error analysis
//     // create Minuit parameters with names
//     MnUserParameters upar;
//     upar.add("mean", mean, 0.1);
//     upar.add("sigma", rms, 0.1);
//     upar.add("area", area, 0.1);
//     // create Migrad minimizer
//     MnMigrad migrad(theFCN, upar);
//     // minimize
//     FunctionMinimum min = migrad();
//     // create MINOS error factory
//     MnMinos minos(theFCN, min);
//     {
//       // 1-sigma MINOS errors
//       std::pair<double, double> e0 = minos(0);
//       std::pair<double, double> e1 = minos(1);
//       std::pair<double, double> e2 = minos(2);
//       // output
//       std::cout << "1-sigma minos errors: " << std::endl;
//       std::cout << "par0: "
//                 << min.userState().value("mean") << " "
//                 << e0.first << " " << e0.second << std::endl;
//       std::cout << "par1: "
//                 << min.userState().value(1) << " "
//                 << e1.first << " " << e1.second << std::endl;
//       std::cout << "par2: " << min.userState().value("area")
//                 << " " << e2.first << " "
//                 << e2.second << std::endl;
//     }

//     {
//       // 2-sigma MINOS errors
//       theFCN.setErrorDef(4.);
//       std::pair<double, double> e0 = minos(0);
//       std::pair<double, double> e1 = minos(1);
//       std::pair<double, double> e2 = minos(2);
//       // output
//       std::cout << "2-sigma minos errors: " << std::endl;
//       std::cout << "par0: "
//                 << min.userState().value("mean")
//                 << " " << e0.first << " " << e0.second << std::endl;
//       std::cout << "par1: "
//                 << min.userState().value(1)
//                 << " " << e1.first << " " << e1.second << std::endl;
//       std::cout << "par2: "
//                 << min.userState().value("area")
//                 << " " << e2.first << " " << e2.second << std::endl;
//     }
//   }
//   {
//     // demonstrate how to use the CONTOURs
//     // create Minuit parameters with names
//     MnUserParameters upar;
//     upar.add("mean", mean, 0.1);
//     upar.add("sigma", rms, 0.1);
//     upar.add("area", area, 0.1);
//     // create Migrad minimizer
//     MnMigrad migrad(theFCN, upar);
//     // minimize
//     FunctionMinimum min = migrad();
//     // create contours factory with FCN and minimum
//     MnContours contours(theFCN, min);
//     // 70% confidence level for 2 parameters contour
//     // around the minimum
//     theFCN.setErrorDef(2.41);
//     std::vector<std::pair<double, double>> cont =
//         contours(0, 1, 20);
//     // 95% confidence level for 2 parameters contour
//     theFCN.setErrorDef(5.99);
//     std::vector<std::pair<double, double>> cont4 =
//         contours(0, 1, 20);
//     // plot the contours
//     MnPlot plot;
//     cont4.insert(cont4.end(), cont.begin(), cont.end());
//     plot(min.userState().value("mean"),
//          min.userState().value("sigma"),
//          cont4);
//   }
//   return 0;
// };
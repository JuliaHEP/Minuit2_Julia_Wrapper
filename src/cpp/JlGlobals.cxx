// this file was auto-generated by wrapit 5168a24-dirty
#include "Wrapper.h"

#include "jlMinuit2.h"
#include "dbg_msg.h"
#include "jlcxx/functions.hpp"
#include "jlcxx/stl.hpp"
// Class generating the wrapper for type 
// signature to use in the veto file: 
struct JlGlobal: public Wrapper {

  JlGlobal(jlcxx::Module& jlModule): Wrapper(jlModule){
  }

  void add_methods() const{
    auto& t = module_;

    DEBUG_MSG("Adding wrapper for int ROOT::Minuit2::Mndaxpy(unsigned int, double, const double *, int, double *, int) (" __HERE__ ")");
    // signature to use in the veto list: int ROOT::Minuit2::Mndaxpy(unsigned int, double, const double *, int, double *, int)
    // defined in /Users/mato/.julia/artifacts/4afa81fd17c8d2616a0895f609579f19a4e4e4b7/include/Minuit2/Minuit2/LAVector.h:28:5
    t.method("ROOT!Minuit2!Mndaxpy", static_cast<int (*)(unsigned int, double, const double *, int, double *, int) >(&ROOT::Minuit2::Mndaxpy));

    DEBUG_MSG("Adding wrapper for int ROOT::Minuit2::Mndscal(unsigned int, double, double *, int) (" __HERE__ ")");
    // signature to use in the veto list: int ROOT::Minuit2::Mndscal(unsigned int, double, double *, int)
    // defined in /Users/mato/.julia/artifacts/4afa81fd17c8d2616a0895f609579f19a4e4e4b7/include/Minuit2/Minuit2/LAVector.h:29:5
    t.method("ROOT!Minuit2!Mndscal", static_cast<int (*)(unsigned int, double, double *, int) >(&ROOT::Minuit2::Mndscal));

    DEBUG_MSG("Adding wrapper for int ROOT::Minuit2::Mndspmv(const char *, unsigned int, double, const double *, const double *, int, double, double *, int) (" __HERE__ ")");
    // signature to use in the veto list: int ROOT::Minuit2::Mndspmv(const char *, unsigned int, double, const double *, const double *, int, double, double *, int)
    // defined in /Users/mato/.julia/artifacts/4afa81fd17c8d2616a0895f609579f19a4e4e4b7/include/Minuit2/Minuit2/LAVector.h:30:5
    t.method("ROOT!Minuit2!Mndspmv", static_cast<int (*)(const char *, unsigned int, double, const double *, const double *, int, double, double *, int) >(&ROOT::Minuit2::Mndspmv));

    DEBUG_MSG("Adding wrapper for int NIter(const ROOT::Minuit2::FunctionMinimum &) (" __HERE__ ")");
    // signature to use in the veto list: int NIter(const ROOT::Minuit2::FunctionMinimum &)
    // defined in ./cpp/Minuit2Wrap.h:41:12
    t.method("NIter", static_cast<int (*)(const ROOT::Minuit2::FunctionMinimum &) >(&NIter));

    DEBUG_MSG("Adding wrapper for ROOT::Minuit2::FunctionMinimum ROOT::Minuit2::createFunctionMinimum(const JuliaFcn &, const ROOT::Minuit2::MnUserParameterState &, const ROOT::Minuit2::MnStrategy &, double) (" __HERE__ ")");
    // signature to use in the veto list: ROOT::Minuit2::FunctionMinimum ROOT::Minuit2::createFunctionMinimum(const JuliaFcn &, const ROOT::Minuit2::MnUserParameterState &, const ROOT::Minuit2::MnStrategy &, double)
    // defined in ./cpp/Minuit2Wrap.h:48:21
    t.method("ROOT!Minuit2!createFunctionMinimum", static_cast<ROOT::Minuit2::FunctionMinimum (*)(const JuliaFcn &, const ROOT::Minuit2::MnUserParameterState &, const ROOT::Minuit2::MnStrategy &, double) >(&ROOT::Minuit2::createFunctionMinimum));

    DEBUG_MSG("Adding wrapper for ROOT::Minuit2::MnUserParameterState ROOT::Minuit2::createMnUserParameterState(const ROOT::Minuit2::MnUserParameterState &) (" __HERE__ ")");
    // signature to use in the veto list: ROOT::Minuit2::MnUserParameterState ROOT::Minuit2::createMnUserParameterState(const ROOT::Minuit2::MnUserParameterState &)
    // defined in ./cpp/Minuit2Wrap.h:50:26
    t.method("ROOT!Minuit2!createMnUserParameterState", static_cast<ROOT::Minuit2::MnUserParameterState (*)(const ROOT::Minuit2::MnUserParameterState &) >(&ROOT::Minuit2::createMnUserParameterState));

    DEBUG_MSG("Adding wrapper for std::vector<XYPoint> paren(const ROOT::Minuit2::MnContours &, unsigned int, unsigned int, unsigned int) (" __HERE__ ")");
    // signature to use in the veto list: std::vector<XYPoint> paren(const ROOT::Minuit2::MnContours &, unsigned int, unsigned int, unsigned int)
    // defined in ./cpp/Minuit2Wrap.h:67:22
    t.method("paren", static_cast<std::vector<XYPoint> (*)(const ROOT::Minuit2::MnContours &, unsigned int, unsigned int, unsigned int) >(&paren));

    DEBUG_MSG("Adding ROOT!Minuit2!MnPrint!eError methods to provide access to the global variable ROOT::Minuit2::MnPrint::eError (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/4afa81fd17c8d2616a0895f609579f19a4e4e4b7/include/Minuit2/Minuit2/MnPrint.h:79:26
    module_.method("ROOT!Minuit2!MnPrint!eError", []()-> ROOT::Minuit2::MnPrint::Verbosity { return ROOT::Minuit2::MnPrint::eError; });

    DEBUG_MSG("Adding ROOT!Minuit2!MnPrint!eWarn methods to provide access to the global variable ROOT::Minuit2::MnPrint::eWarn (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/4afa81fd17c8d2616a0895f609579f19a4e4e4b7/include/Minuit2/Minuit2/MnPrint.h:80:26
    module_.method("ROOT!Minuit2!MnPrint!eWarn", []()-> ROOT::Minuit2::MnPrint::Verbosity { return ROOT::Minuit2::MnPrint::eWarn; });

    DEBUG_MSG("Adding ROOT!Minuit2!MnPrint!eInfo methods to provide access to the global variable ROOT::Minuit2::MnPrint::eInfo (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/4afa81fd17c8d2616a0895f609579f19a4e4e4b7/include/Minuit2/Minuit2/MnPrint.h:81:26
    module_.method("ROOT!Minuit2!MnPrint!eInfo", []()-> ROOT::Minuit2::MnPrint::Verbosity { return ROOT::Minuit2::MnPrint::eInfo; });

    DEBUG_MSG("Adding ROOT!Minuit2!MnPrint!eDebug methods to provide access to the global variable ROOT::Minuit2::MnPrint::eDebug (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/4afa81fd17c8d2616a0895f609579f19a4e4e4b7/include/Minuit2/Minuit2/MnPrint.h:82:26
    module_.method("ROOT!Minuit2!MnPrint!eDebug", []()-> ROOT::Minuit2::MnPrint::Verbosity { return ROOT::Minuit2::MnPrint::eDebug; });

    DEBUG_MSG("Adding ROOT!Minuit2!MnPrint!eTrace methods to provide access to the global variable ROOT::Minuit2::MnPrint::eTrace (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/4afa81fd17c8d2616a0895f609579f19a4e4e4b7/include/Minuit2/Minuit2/MnPrint.h:83:26
    module_.method("ROOT!Minuit2!MnPrint!eTrace", []()-> ROOT::Minuit2::MnPrint::Verbosity { return ROOT::Minuit2::MnPrint::eTrace; });
  }
};
std::shared_ptr<Wrapper> newJlGlobal(jlcxx::Module& module){
  return std::shared_ptr<Wrapper>(new JlGlobal(module));
}

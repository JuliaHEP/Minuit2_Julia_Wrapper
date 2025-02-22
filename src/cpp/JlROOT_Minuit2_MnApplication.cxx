// this file was auto-generated by wrapit 5168a24-dirty
#include "Wrapper.h"

#include "jlMinuit2.h"
#include "dbg_msg.h"
#include "jlcxx/functions.hpp"
#include "jlcxx/stl.hpp"

namespace jlcxx {
  template<> struct IsMirroredType<ROOT::Minuit2::MnApplication> : std::false_type { };
  template<> struct DefaultConstructible<ROOT::Minuit2::MnApplication> : std::false_type { };
}

// Class generating the wrapper for type ROOT::Minuit2::MnApplication
// signature to use in the veto file: ROOT::Minuit2::MnApplication
struct JlROOT_Minuit2_MnApplication: public Wrapper {

  JlROOT_Minuit2_MnApplication(jlcxx::Module& jlModule): Wrapper(jlModule){
    DEBUG_MSG("Adding wrapper for type ROOT::Minuit2::MnApplication (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/4afa81fd17c8d2616a0895f609579f19a4e4e4b7/include/Minuit2/Minuit2/MnApplication.h:36:7
    jlcxx::TypeWrapper<ROOT::Minuit2::MnApplication>  t = jlModule.add_type<ROOT::Minuit2::MnApplication>("ROOT!Minuit2!MnApplication");
    type_ = std::unique_ptr<jlcxx::TypeWrapper<ROOT::Minuit2::MnApplication>>(new jlcxx::TypeWrapper<ROOT::Minuit2::MnApplication>(jlModule, t));
  }

  void add_methods() const{
    auto& t = *type_;


    DEBUG_MSG("Adding wrapper for ROOT::Minuit2::FunctionMinimum ROOT::Minuit2::MnApplication::operator()(unsigned int, double) (" __HERE__ ")");
    // signature to use in the veto list: ROOT::Minuit2::FunctionMinimum ROOT::Minuit2::MnApplication::operator()(unsigned int, double)
    // defined in /Users/mato/.julia/artifacts/4afa81fd17c8d2616a0895f609579f19a4e4e4b7/include/Minuit2/Minuit2/MnApplication.h:53:28
    t.method("paren", static_cast<ROOT::Minuit2::FunctionMinimum (ROOT::Minuit2::MnApplication::*)(unsigned int, double) >(&ROOT::Minuit2::MnApplication::operator()));
    t.method("paren", [](ROOT::Minuit2::MnApplication& a)->ROOT::Minuit2::FunctionMinimum { return a.operator()(); });
    t.method("paren", [](ROOT::Minuit2::MnApplication& a, unsigned int arg0)->ROOT::Minuit2::FunctionMinimum { return a.operator()(arg0); });
    t.method("paren", [](ROOT::Minuit2::MnApplication* a)->ROOT::Minuit2::FunctionMinimum { return a->operator()(); });
    t.method("paren", [](ROOT::Minuit2::MnApplication* a, unsigned int arg0)->ROOT::Minuit2::FunctionMinimum { return a->operator()(arg0); });

    DEBUG_MSG("Adding wrapper for ROOT::Minuit2::ModularFunctionMinimizer & ROOT::Minuit2::MnApplication::Minimizer() (" __HERE__ ")");
    // signature to use in the veto list: ROOT::Minuit2::ModularFunctionMinimizer & ROOT::Minuit2::MnApplication::Minimizer()
    // defined in /Users/mato/.julia/artifacts/4afa81fd17c8d2616a0895f609579f19a4e4e4b7/include/Minuit2/Minuit2/MnApplication.h:55:38
    t.method("Minimizer", static_cast<ROOT::Minuit2::ModularFunctionMinimizer & (ROOT::Minuit2::MnApplication::*)() >(&ROOT::Minuit2::MnApplication::Minimizer));

    DEBUG_MSG("Adding wrapper for const ROOT::Minuit2::ModularFunctionMinimizer & ROOT::Minuit2::MnApplication::Minimizer() (" __HERE__ ")");
    // signature to use in the veto list: const ROOT::Minuit2::ModularFunctionMinimizer & ROOT::Minuit2::MnApplication::Minimizer()
    // defined in /Users/mato/.julia/artifacts/4afa81fd17c8d2616a0895f609579f19a4e4e4b7/include/Minuit2/Minuit2/MnApplication.h:56:44
    t.method("Minimizer", static_cast<const ROOT::Minuit2::ModularFunctionMinimizer & (ROOT::Minuit2::MnApplication::*)()  const>(&ROOT::Minuit2::MnApplication::Minimizer));

    DEBUG_MSG("Adding wrapper for const ROOT::Minuit2::MnMachinePrecision & ROOT::Minuit2::MnApplication::Precision() (" __HERE__ ")");
    // signature to use in the veto list: const ROOT::Minuit2::MnMachinePrecision & ROOT::Minuit2::MnApplication::Precision()
    // defined in /Users/mato/.julia/artifacts/4afa81fd17c8d2616a0895f609579f19a4e4e4b7/include/Minuit2/Minuit2/MnApplication.h:58:30
    t.method("Precision", static_cast<const ROOT::Minuit2::MnMachinePrecision & (ROOT::Minuit2::MnApplication::*)()  const>(&ROOT::Minuit2::MnApplication::Precision));

    DEBUG_MSG("Adding wrapper for const ROOT::Minuit2::MnUserParameterState & ROOT::Minuit2::MnApplication::State() (" __HERE__ ")");
    // signature to use in the veto list: const ROOT::Minuit2::MnUserParameterState & ROOT::Minuit2::MnApplication::State()
    // defined in /Users/mato/.julia/artifacts/4afa81fd17c8d2616a0895f609579f19a4e4e4b7/include/Minuit2/Minuit2/MnApplication.h:59:32
    t.method("State", static_cast<const ROOT::Minuit2::MnUserParameterState & (ROOT::Minuit2::MnApplication::*)()  const>(&ROOT::Minuit2::MnApplication::State));

    DEBUG_MSG("Adding wrapper for const ROOT::Minuit2::MnUserParameters & ROOT::Minuit2::MnApplication::Parameters() (" __HERE__ ")");
    // signature to use in the veto list: const ROOT::Minuit2::MnUserParameters & ROOT::Minuit2::MnApplication::Parameters()
    // defined in /Users/mato/.julia/artifacts/4afa81fd17c8d2616a0895f609579f19a4e4e4b7/include/Minuit2/Minuit2/MnApplication.h:60:28
    t.method("Parameters", static_cast<const ROOT::Minuit2::MnUserParameters & (ROOT::Minuit2::MnApplication::*)()  const>(&ROOT::Minuit2::MnApplication::Parameters));

    DEBUG_MSG("Adding wrapper for const ROOT::Minuit2::MnUserCovariance & ROOT::Minuit2::MnApplication::Covariance() (" __HERE__ ")");
    // signature to use in the veto list: const ROOT::Minuit2::MnUserCovariance & ROOT::Minuit2::MnApplication::Covariance()
    // defined in /Users/mato/.julia/artifacts/4afa81fd17c8d2616a0895f609579f19a4e4e4b7/include/Minuit2/Minuit2/MnApplication.h:61:28
    t.method("Covariance", static_cast<const ROOT::Minuit2::MnUserCovariance & (ROOT::Minuit2::MnApplication::*)()  const>(&ROOT::Minuit2::MnApplication::Covariance));

    DEBUG_MSG("Adding wrapper for const ROOT::Minuit2::FCNBase & ROOT::Minuit2::MnApplication::Fcnbase() (" __HERE__ ")");
    // signature to use in the veto list: const ROOT::Minuit2::FCNBase & ROOT::Minuit2::MnApplication::Fcnbase()
    // defined in /Users/mato/.julia/artifacts/4afa81fd17c8d2616a0895f609579f19a4e4e4b7/include/Minuit2/Minuit2/MnApplication.h:62:27
    t.method("Fcnbase", static_cast<const ROOT::Minuit2::FCNBase & (ROOT::Minuit2::MnApplication::*)()  const>(&ROOT::Minuit2::MnApplication::Fcnbase));

    DEBUG_MSG("Adding wrapper for const ROOT::Minuit2::MnStrategy & ROOT::Minuit2::MnApplication::Strategy() (" __HERE__ ")");
    // signature to use in the veto list: const ROOT::Minuit2::MnStrategy & ROOT::Minuit2::MnApplication::Strategy()
    // defined in /Users/mato/.julia/artifacts/4afa81fd17c8d2616a0895f609579f19a4e4e4b7/include/Minuit2/Minuit2/MnApplication.h:63:22
    t.method("Strategy", static_cast<const ROOT::Minuit2::MnStrategy & (ROOT::Minuit2::MnApplication::*)()  const>(&ROOT::Minuit2::MnApplication::Strategy));

    DEBUG_MSG("Adding wrapper for unsigned int ROOT::Minuit2::MnApplication::NumOfCalls() (" __HERE__ ")");
    // signature to use in the veto list: unsigned int ROOT::Minuit2::MnApplication::NumOfCalls()
    // defined in /Users/mato/.julia/artifacts/4afa81fd17c8d2616a0895f609579f19a4e4e4b7/include/Minuit2/Minuit2/MnApplication.h:64:17
    t.method("NumOfCalls", static_cast<unsigned int (ROOT::Minuit2::MnApplication::*)()  const>(&ROOT::Minuit2::MnApplication::NumOfCalls));

    DEBUG_MSG("Adding wrapper for const std::vector<ROOT::Minuit2::MinuitParameter> & ROOT::Minuit2::MnApplication::MinuitParameters() (" __HERE__ ")");
    // signature to use in the veto list: const std::vector<ROOT::Minuit2::MinuitParameter> & ROOT::Minuit2::MnApplication::MinuitParameters()
    // defined in /Users/mato/.julia/artifacts/4afa81fd17c8d2616a0895f609579f19a4e4e4b7/include/Minuit2/Minuit2/MnApplication.h:77:55
    t.method("MinuitParameters", static_cast<const std::vector<ROOT::Minuit2::MinuitParameter> & (ROOT::Minuit2::MnApplication::*)()  const>(&ROOT::Minuit2::MnApplication::MinuitParameters));

    DEBUG_MSG("Adding wrapper for std::vector<double> ROOT::Minuit2::MnApplication::Params() (" __HERE__ ")");
    // signature to use in the veto list: std::vector<double> ROOT::Minuit2::MnApplication::Params()
    // defined in /Users/mato/.julia/artifacts/4afa81fd17c8d2616a0895f609579f19a4e4e4b7/include/Minuit2/Minuit2/MnApplication.h:79:24
    t.method("Params", static_cast<std::vector<double> (ROOT::Minuit2::MnApplication::*)()  const>(&ROOT::Minuit2::MnApplication::Params));

    DEBUG_MSG("Adding wrapper for std::vector<double> ROOT::Minuit2::MnApplication::Errors() (" __HERE__ ")");
    // signature to use in the veto list: std::vector<double> ROOT::Minuit2::MnApplication::Errors()
    // defined in /Users/mato/.julia/artifacts/4afa81fd17c8d2616a0895f609579f19a4e4e4b7/include/Minuit2/Minuit2/MnApplication.h:80:24
    t.method("Errors", static_cast<std::vector<double> (ROOT::Minuit2::MnApplication::*)()  const>(&ROOT::Minuit2::MnApplication::Errors));

    DEBUG_MSG("Adding wrapper for const ROOT::Minuit2::MinuitParameter & ROOT::Minuit2::MnApplication::Parameter(unsigned int) (" __HERE__ ")");
    // signature to use in the veto list: const ROOT::Minuit2::MinuitParameter & ROOT::Minuit2::MnApplication::Parameter(unsigned int)
    // defined in /Users/mato/.julia/artifacts/4afa81fd17c8d2616a0895f609579f19a4e4e4b7/include/Minuit2/Minuit2/MnApplication.h:83:27
    t.method("Parameter", static_cast<const ROOT::Minuit2::MinuitParameter & (ROOT::Minuit2::MnApplication::*)(unsigned int)  const>(&ROOT::Minuit2::MnApplication::Parameter));

    DEBUG_MSG("Adding wrapper for void ROOT::Minuit2::MnApplication::Add(const char *, double, double) (" __HERE__ ")");
    // signature to use in the veto list: void ROOT::Minuit2::MnApplication::Add(const char *, double, double)
    // defined in /Users/mato/.julia/artifacts/4afa81fd17c8d2616a0895f609579f19a4e4e4b7/include/Minuit2/Minuit2/MnApplication.h:86:9
    t.method("Add", static_cast<void (ROOT::Minuit2::MnApplication::*)(const char *, double, double) >(&ROOT::Minuit2::MnApplication::Add));

    DEBUG_MSG("Adding wrapper for void ROOT::Minuit2::MnApplication::Add(const char *, double, double, double, double) (" __HERE__ ")");
    // signature to use in the veto list: void ROOT::Minuit2::MnApplication::Add(const char *, double, double, double, double)
    // defined in /Users/mato/.julia/artifacts/4afa81fd17c8d2616a0895f609579f19a4e4e4b7/include/Minuit2/Minuit2/MnApplication.h:88:9
    t.method("Add", static_cast<void (ROOT::Minuit2::MnApplication::*)(const char *, double, double, double, double) >(&ROOT::Minuit2::MnApplication::Add));

    DEBUG_MSG("Adding wrapper for void ROOT::Minuit2::MnApplication::Add(const char *, double) (" __HERE__ ")");
    // signature to use in the veto list: void ROOT::Minuit2::MnApplication::Add(const char *, double)
    // defined in /Users/mato/.julia/artifacts/4afa81fd17c8d2616a0895f609579f19a4e4e4b7/include/Minuit2/Minuit2/MnApplication.h:90:9
    t.method("Add", static_cast<void (ROOT::Minuit2::MnApplication::*)(const char *, double) >(&ROOT::Minuit2::MnApplication::Add));

    DEBUG_MSG("Adding wrapper for void ROOT::Minuit2::MnApplication::Fix(unsigned int) (" __HERE__ ")");
    // signature to use in the veto list: void ROOT::Minuit2::MnApplication::Fix(unsigned int)
    // defined in /Users/mato/.julia/artifacts/4afa81fd17c8d2616a0895f609579f19a4e4e4b7/include/Minuit2/Minuit2/MnApplication.h:93:9
    t.method("Fix", static_cast<void (ROOT::Minuit2::MnApplication::*)(unsigned int) >(&ROOT::Minuit2::MnApplication::Fix));

    DEBUG_MSG("Adding wrapper for void ROOT::Minuit2::MnApplication::Release(unsigned int) (" __HERE__ ")");
    // signature to use in the veto list: void ROOT::Minuit2::MnApplication::Release(unsigned int)
    // defined in /Users/mato/.julia/artifacts/4afa81fd17c8d2616a0895f609579f19a4e4e4b7/include/Minuit2/Minuit2/MnApplication.h:94:9
    t.method("Release", static_cast<void (ROOT::Minuit2::MnApplication::*)(unsigned int) >(&ROOT::Minuit2::MnApplication::Release));

    DEBUG_MSG("Adding wrapper for void ROOT::Minuit2::MnApplication::SetValue(unsigned int, double) (" __HERE__ ")");
    // signature to use in the veto list: void ROOT::Minuit2::MnApplication::SetValue(unsigned int, double)
    // defined in /Users/mato/.julia/artifacts/4afa81fd17c8d2616a0895f609579f19a4e4e4b7/include/Minuit2/Minuit2/MnApplication.h:95:9
    t.method("SetValue", static_cast<void (ROOT::Minuit2::MnApplication::*)(unsigned int, double) >(&ROOT::Minuit2::MnApplication::SetValue));

    DEBUG_MSG("Adding wrapper for void ROOT::Minuit2::MnApplication::SetError(unsigned int, double) (" __HERE__ ")");
    // signature to use in the veto list: void ROOT::Minuit2::MnApplication::SetError(unsigned int, double)
    // defined in /Users/mato/.julia/artifacts/4afa81fd17c8d2616a0895f609579f19a4e4e4b7/include/Minuit2/Minuit2/MnApplication.h:96:9
    t.method("SetError", static_cast<void (ROOT::Minuit2::MnApplication::*)(unsigned int, double) >(&ROOT::Minuit2::MnApplication::SetError));

    DEBUG_MSG("Adding wrapper for void ROOT::Minuit2::MnApplication::SetLimits(unsigned int, double, double) (" __HERE__ ")");
    // signature to use in the veto list: void ROOT::Minuit2::MnApplication::SetLimits(unsigned int, double, double)
    // defined in /Users/mato/.julia/artifacts/4afa81fd17c8d2616a0895f609579f19a4e4e4b7/include/Minuit2/Minuit2/MnApplication.h:97:9
    t.method("SetLimits", static_cast<void (ROOT::Minuit2::MnApplication::*)(unsigned int, double, double) >(&ROOT::Minuit2::MnApplication::SetLimits));

    DEBUG_MSG("Adding wrapper for void ROOT::Minuit2::MnApplication::RemoveLimits(unsigned int) (" __HERE__ ")");
    // signature to use in the veto list: void ROOT::Minuit2::MnApplication::RemoveLimits(unsigned int)
    // defined in /Users/mato/.julia/artifacts/4afa81fd17c8d2616a0895f609579f19a4e4e4b7/include/Minuit2/Minuit2/MnApplication.h:98:9
    t.method("RemoveLimits", static_cast<void (ROOT::Minuit2::MnApplication::*)(unsigned int) >(&ROOT::Minuit2::MnApplication::RemoveLimits));

    DEBUG_MSG("Adding wrapper for double ROOT::Minuit2::MnApplication::Value(unsigned int) (" __HERE__ ")");
    // signature to use in the veto list: double ROOT::Minuit2::MnApplication::Value(unsigned int)
    // defined in /Users/mato/.julia/artifacts/4afa81fd17c8d2616a0895f609579f19a4e4e4b7/include/Minuit2/Minuit2/MnApplication.h:100:11
    t.method("Value", static_cast<double (ROOT::Minuit2::MnApplication::*)(unsigned int)  const>(&ROOT::Minuit2::MnApplication::Value));

    DEBUG_MSG("Adding wrapper for double ROOT::Minuit2::MnApplication::Error(unsigned int) (" __HERE__ ")");
    // signature to use in the veto list: double ROOT::Minuit2::MnApplication::Error(unsigned int)
    // defined in /Users/mato/.julia/artifacts/4afa81fd17c8d2616a0895f609579f19a4e4e4b7/include/Minuit2/Minuit2/MnApplication.h:101:11
    t.method("Error", static_cast<double (ROOT::Minuit2::MnApplication::*)(unsigned int)  const>(&ROOT::Minuit2::MnApplication::Error));

    DEBUG_MSG("Adding wrapper for void ROOT::Minuit2::MnApplication::Fix(const char *) (" __HERE__ ")");
    // signature to use in the veto list: void ROOT::Minuit2::MnApplication::Fix(const char *)
    // defined in /Users/mato/.julia/artifacts/4afa81fd17c8d2616a0895f609579f19a4e4e4b7/include/Minuit2/Minuit2/MnApplication.h:104:9
    t.method("Fix", static_cast<void (ROOT::Minuit2::MnApplication::*)(const char *) >(&ROOT::Minuit2::MnApplication::Fix));

    DEBUG_MSG("Adding wrapper for void ROOT::Minuit2::MnApplication::Release(const char *) (" __HERE__ ")");
    // signature to use in the veto list: void ROOT::Minuit2::MnApplication::Release(const char *)
    // defined in /Users/mato/.julia/artifacts/4afa81fd17c8d2616a0895f609579f19a4e4e4b7/include/Minuit2/Minuit2/MnApplication.h:105:9
    t.method("Release", static_cast<void (ROOT::Minuit2::MnApplication::*)(const char *) >(&ROOT::Minuit2::MnApplication::Release));

    DEBUG_MSG("Adding wrapper for void ROOT::Minuit2::MnApplication::SetValue(const char *, double) (" __HERE__ ")");
    // signature to use in the veto list: void ROOT::Minuit2::MnApplication::SetValue(const char *, double)
    // defined in /Users/mato/.julia/artifacts/4afa81fd17c8d2616a0895f609579f19a4e4e4b7/include/Minuit2/Minuit2/MnApplication.h:106:9
    t.method("SetValue", static_cast<void (ROOT::Minuit2::MnApplication::*)(const char *, double) >(&ROOT::Minuit2::MnApplication::SetValue));

    DEBUG_MSG("Adding wrapper for void ROOT::Minuit2::MnApplication::SetError(const char *, double) (" __HERE__ ")");
    // signature to use in the veto list: void ROOT::Minuit2::MnApplication::SetError(const char *, double)
    // defined in /Users/mato/.julia/artifacts/4afa81fd17c8d2616a0895f609579f19a4e4e4b7/include/Minuit2/Minuit2/MnApplication.h:107:9
    t.method("SetError", static_cast<void (ROOT::Minuit2::MnApplication::*)(const char *, double) >(&ROOT::Minuit2::MnApplication::SetError));

    DEBUG_MSG("Adding wrapper for void ROOT::Minuit2::MnApplication::SetLimits(const char *, double, double) (" __HERE__ ")");
    // signature to use in the veto list: void ROOT::Minuit2::MnApplication::SetLimits(const char *, double, double)
    // defined in /Users/mato/.julia/artifacts/4afa81fd17c8d2616a0895f609579f19a4e4e4b7/include/Minuit2/Minuit2/MnApplication.h:108:9
    t.method("SetLimits", static_cast<void (ROOT::Minuit2::MnApplication::*)(const char *, double, double) >(&ROOT::Minuit2::MnApplication::SetLimits));

    DEBUG_MSG("Adding wrapper for void ROOT::Minuit2::MnApplication::RemoveLimits(const char *) (" __HERE__ ")");
    // signature to use in the veto list: void ROOT::Minuit2::MnApplication::RemoveLimits(const char *)
    // defined in /Users/mato/.julia/artifacts/4afa81fd17c8d2616a0895f609579f19a4e4e4b7/include/Minuit2/Minuit2/MnApplication.h:109:9
    t.method("RemoveLimits", static_cast<void (ROOT::Minuit2::MnApplication::*)(const char *) >(&ROOT::Minuit2::MnApplication::RemoveLimits));

    DEBUG_MSG("Adding wrapper for void ROOT::Minuit2::MnApplication::SetPrecision(double) (" __HERE__ ")");
    // signature to use in the veto list: void ROOT::Minuit2::MnApplication::SetPrecision(double)
    // defined in /Users/mato/.julia/artifacts/4afa81fd17c8d2616a0895f609579f19a4e4e4b7/include/Minuit2/Minuit2/MnApplication.h:110:9
    t.method("SetPrecision", static_cast<void (ROOT::Minuit2::MnApplication::*)(double) >(&ROOT::Minuit2::MnApplication::SetPrecision));

    DEBUG_MSG("Adding wrapper for double ROOT::Minuit2::MnApplication::Value(const char *) (" __HERE__ ")");
    // signature to use in the veto list: double ROOT::Minuit2::MnApplication::Value(const char *)
    // defined in /Users/mato/.julia/artifacts/4afa81fd17c8d2616a0895f609579f19a4e4e4b7/include/Minuit2/Minuit2/MnApplication.h:112:11
    t.method("Value", static_cast<double (ROOT::Minuit2::MnApplication::*)(const char *)  const>(&ROOT::Minuit2::MnApplication::Value));

    DEBUG_MSG("Adding wrapper for double ROOT::Minuit2::MnApplication::Error(const char *) (" __HERE__ ")");
    // signature to use in the veto list: double ROOT::Minuit2::MnApplication::Error(const char *)
    // defined in /Users/mato/.julia/artifacts/4afa81fd17c8d2616a0895f609579f19a4e4e4b7/include/Minuit2/Minuit2/MnApplication.h:113:11
    t.method("Error", static_cast<double (ROOT::Minuit2::MnApplication::*)(const char *)  const>(&ROOT::Minuit2::MnApplication::Error));

    DEBUG_MSG("Adding wrapper for unsigned int ROOT::Minuit2::MnApplication::Index(const char *) (" __HERE__ ")");
    // signature to use in the veto list: unsigned int ROOT::Minuit2::MnApplication::Index(const char *)
    // defined in /Users/mato/.julia/artifacts/4afa81fd17c8d2616a0895f609579f19a4e4e4b7/include/Minuit2/Minuit2/MnApplication.h:116:17
    t.method("Index", static_cast<unsigned int (ROOT::Minuit2::MnApplication::*)(const char *)  const>(&ROOT::Minuit2::MnApplication::Index));

    DEBUG_MSG("Adding wrapper for const char * ROOT::Minuit2::MnApplication::Name(unsigned int) (" __HERE__ ")");
    // signature to use in the veto list: const char * ROOT::Minuit2::MnApplication::Name(unsigned int)
    // defined in /Users/mato/.julia/artifacts/4afa81fd17c8d2616a0895f609579f19a4e4e4b7/include/Minuit2/Minuit2/MnApplication.h:118:16
    t.method("Name", [](ROOT::Minuit2::MnApplication const& a, unsigned int arg0) { return (std::string)a.Name(arg0); });
    t.method("Name", [](ROOT::Minuit2::MnApplication const* a, unsigned int arg0) { return (std::string)a->Name(arg0); });

    DEBUG_MSG("Adding wrapper for double ROOT::Minuit2::MnApplication::Int2ext(unsigned int, double) (" __HERE__ ")");
    // signature to use in the veto list: double ROOT::Minuit2::MnApplication::Int2ext(unsigned int, double)
    // defined in /Users/mato/.julia/artifacts/4afa81fd17c8d2616a0895f609579f19a4e4e4b7/include/Minuit2/Minuit2/MnApplication.h:121:11
    t.method("Int2ext", static_cast<double (ROOT::Minuit2::MnApplication::*)(unsigned int, double)  const>(&ROOT::Minuit2::MnApplication::Int2ext));

    DEBUG_MSG("Adding wrapper for double ROOT::Minuit2::MnApplication::Ext2int(unsigned int, double) (" __HERE__ ")");
    // signature to use in the veto list: double ROOT::Minuit2::MnApplication::Ext2int(unsigned int, double)
    // defined in /Users/mato/.julia/artifacts/4afa81fd17c8d2616a0895f609579f19a4e4e4b7/include/Minuit2/Minuit2/MnApplication.h:122:11
    t.method("Ext2int", static_cast<double (ROOT::Minuit2::MnApplication::*)(unsigned int, double)  const>(&ROOT::Minuit2::MnApplication::Ext2int));

    DEBUG_MSG("Adding wrapper for unsigned int ROOT::Minuit2::MnApplication::IntOfExt(unsigned int) (" __HERE__ ")");
    // signature to use in the veto list: unsigned int ROOT::Minuit2::MnApplication::IntOfExt(unsigned int)
    // defined in /Users/mato/.julia/artifacts/4afa81fd17c8d2616a0895f609579f19a4e4e4b7/include/Minuit2/Minuit2/MnApplication.h:123:17
    t.method("IntOfExt", static_cast<unsigned int (ROOT::Minuit2::MnApplication::*)(unsigned int)  const>(&ROOT::Minuit2::MnApplication::IntOfExt));

    DEBUG_MSG("Adding wrapper for unsigned int ROOT::Minuit2::MnApplication::ExtOfInt(unsigned int) (" __HERE__ ")");
    // signature to use in the veto list: unsigned int ROOT::Minuit2::MnApplication::ExtOfInt(unsigned int)
    // defined in /Users/mato/.julia/artifacts/4afa81fd17c8d2616a0895f609579f19a4e4e4b7/include/Minuit2/Minuit2/MnApplication.h:124:17
    t.method("ExtOfInt", static_cast<unsigned int (ROOT::Minuit2::MnApplication::*)(unsigned int)  const>(&ROOT::Minuit2::MnApplication::ExtOfInt));

    DEBUG_MSG("Adding wrapper for unsigned int ROOT::Minuit2::MnApplication::VariableParameters() (" __HERE__ ")");
    // signature to use in the veto list: unsigned int ROOT::Minuit2::MnApplication::VariableParameters()
    // defined in /Users/mato/.julia/artifacts/4afa81fd17c8d2616a0895f609579f19a4e4e4b7/include/Minuit2/Minuit2/MnApplication.h:125:17
    t.method("VariableParameters", static_cast<unsigned int (ROOT::Minuit2::MnApplication::*)()  const>(&ROOT::Minuit2::MnApplication::VariableParameters));
  }

private:
  std::unique_ptr<jlcxx::TypeWrapper<ROOT::Minuit2::MnApplication>> type_;
};
std::shared_ptr<Wrapper> newJlROOT_Minuit2_MnApplication(jlcxx::Module& module){
  return std::shared_ptr<Wrapper>(new JlROOT_Minuit2_MnApplication(module));
}

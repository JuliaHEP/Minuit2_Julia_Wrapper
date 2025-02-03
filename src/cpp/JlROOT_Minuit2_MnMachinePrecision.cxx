// this file was auto-generated by wrapit 5168a24-dirty
#include "Wrapper.h"

#include "jlMinuit2.h"
#include "dbg_msg.h"
#include "jlcxx/functions.hpp"
#include "jlcxx/stl.hpp"

namespace jlcxx {
  template<> struct IsMirroredType<ROOT::Minuit2::MnMachinePrecision> : std::false_type { };
  template<> struct DefaultConstructible<ROOT::Minuit2::MnMachinePrecision> : std::false_type { };
}

// Class generating the wrapper for type ROOT::Minuit2::MnMachinePrecision
// signature to use in the veto file: ROOT::Minuit2::MnMachinePrecision
struct JlROOT_Minuit2_MnMachinePrecision: public Wrapper {

  JlROOT_Minuit2_MnMachinePrecision(jlcxx::Module& jlModule): Wrapper(jlModule){
    DEBUG_MSG("Adding wrapper for type ROOT::Minuit2::MnMachinePrecision (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/4afa81fd17c8d2616a0895f609579f19a4e4e4b7/include/Minuit2/Minuit2/MnMachinePrecision.h:32:7
    jlcxx::TypeWrapper<ROOT::Minuit2::MnMachinePrecision>  t = jlModule.add_type<ROOT::Minuit2::MnMachinePrecision>("ROOT!Minuit2!MnMachinePrecision");
    type_ = std::unique_ptr<jlcxx::TypeWrapper<ROOT::Minuit2::MnMachinePrecision>>(new jlcxx::TypeWrapper<ROOT::Minuit2::MnMachinePrecision>(jlModule, t));
  }

  void add_methods() const{
    auto& t = *type_;
    t.template constructor<>(/*finalize=*/jlcxx::finalize_policy::yes);

    DEBUG_MSG("Adding wrapper for double ROOT::Minuit2::MnMachinePrecision::Eps() (" __HERE__ ")");
    // signature to use in the veto list: double ROOT::Minuit2::MnMachinePrecision::Eps()
    // defined in /Users/mato/.julia/artifacts/4afa81fd17c8d2616a0895f609579f19a4e4e4b7/include/Minuit2/Minuit2/MnMachinePrecision.h:38:11
    t.method("Eps", static_cast<double (ROOT::Minuit2::MnMachinePrecision::*)()  const>(&ROOT::Minuit2::MnMachinePrecision::Eps));

    DEBUG_MSG("Adding wrapper for double ROOT::Minuit2::MnMachinePrecision::Eps2() (" __HERE__ ")");
    // signature to use in the veto list: double ROOT::Minuit2::MnMachinePrecision::Eps2()
    // defined in /Users/mato/.julia/artifacts/4afa81fd17c8d2616a0895f609579f19a4e4e4b7/include/Minuit2/Minuit2/MnMachinePrecision.h:41:11
    t.method("Eps2", static_cast<double (ROOT::Minuit2::MnMachinePrecision::*)()  const>(&ROOT::Minuit2::MnMachinePrecision::Eps2));

    DEBUG_MSG("Adding wrapper for void ROOT::Minuit2::MnMachinePrecision::SetPrecision(double) (" __HERE__ ")");
    // signature to use in the veto list: void ROOT::Minuit2::MnMachinePrecision::SetPrecision(double)
    // defined in /Users/mato/.julia/artifacts/4afa81fd17c8d2616a0895f609579f19a4e4e4b7/include/Minuit2/Minuit2/MnMachinePrecision.h:44:9
    t.method("SetPrecision", static_cast<void (ROOT::Minuit2::MnMachinePrecision::*)(double) >(&ROOT::Minuit2::MnMachinePrecision::SetPrecision));

    DEBUG_MSG("Adding wrapper for void ROOT::Minuit2::MnMachinePrecision::ComputePrecision() (" __HERE__ ")");
    // signature to use in the veto list: void ROOT::Minuit2::MnMachinePrecision::ComputePrecision()
    // defined in /Users/mato/.julia/artifacts/4afa81fd17c8d2616a0895f609579f19a4e4e4b7/include/Minuit2/Minuit2/MnMachinePrecision.h:52:9
    t.method("ComputePrecision", static_cast<void (ROOT::Minuit2::MnMachinePrecision::*)() >(&ROOT::Minuit2::MnMachinePrecision::ComputePrecision));
  }

private:
  std::unique_ptr<jlcxx::TypeWrapper<ROOT::Minuit2::MnMachinePrecision>> type_;
};
std::shared_ptr<Wrapper> newJlROOT_Minuit2_MnMachinePrecision(jlcxx::Module& module){
  return std::shared_ptr<Wrapper>(new JlROOT_Minuit2_MnMachinePrecision(module));
}

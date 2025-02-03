// this file was auto-generated by wrapit 5168a24-dirty
#include "Wrapper.h"

#include "jlMinuit2.h"
#include "dbg_msg.h"
#include "jlcxx/functions.hpp"
#include "jlcxx/stl.hpp"

namespace jlcxx {
  template<> struct IsMirroredType<ROOT::Minuit2::MnGlobalCorrelationCoeff> : std::false_type { };
  template<> struct DefaultConstructible<ROOT::Minuit2::MnGlobalCorrelationCoeff> : std::false_type { };
}

// Class generating the wrapper for type ROOT::Minuit2::MnGlobalCorrelationCoeff
// signature to use in the veto file: ROOT::Minuit2::MnGlobalCorrelationCoeff
struct JlROOT_Minuit2_MnGlobalCorrelationCoeff: public Wrapper {

  JlROOT_Minuit2_MnGlobalCorrelationCoeff(jlcxx::Module& jlModule): Wrapper(jlModule){
    DEBUG_MSG("Adding wrapper for type ROOT::Minuit2::MnGlobalCorrelationCoeff (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/4afa81fd17c8d2616a0895f609579f19a4e4e4b7/include/Minuit2/Minuit2/MnGlobalCorrelationCoeff.h:25:7
    jlcxx::TypeWrapper<ROOT::Minuit2::MnGlobalCorrelationCoeff>  t = jlModule.add_type<ROOT::Minuit2::MnGlobalCorrelationCoeff>("ROOT!Minuit2!MnGlobalCorrelationCoeff");
    type_ = std::unique_ptr<jlcxx::TypeWrapper<ROOT::Minuit2::MnGlobalCorrelationCoeff>>(new jlcxx::TypeWrapper<ROOT::Minuit2::MnGlobalCorrelationCoeff>(jlModule, t));
  }

  void add_methods() const{
    auto& t = *type_;
    t.template constructor<>(/*finalize=*/jlcxx::finalize_policy::yes);


    DEBUG_MSG("Adding wrapper for void ROOT::Minuit2::MnGlobalCorrelationCoeff::MnGlobalCorrelationCoeff(const ROOT::Minuit2::MnAlgebraicSymMatrix &) (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/4afa81fd17c8d2616a0895f609579f19a4e4e4b7/include/Minuit2/Minuit2/MnGlobalCorrelationCoeff.h:30:4
    t.constructor<const ROOT::Minuit2::MnAlgebraicSymMatrix &>(/*finalize=*/jlcxx::finalize_policy::yes);

    DEBUG_MSG("Adding wrapper for const std::vector<double> & ROOT::Minuit2::MnGlobalCorrelationCoeff::GlobalCC() (" __HERE__ ")");
    // signature to use in the veto list: const std::vector<double> & ROOT::Minuit2::MnGlobalCorrelationCoeff::GlobalCC()
    // defined in /Users/mato/.julia/artifacts/4afa81fd17c8d2616a0895f609579f19a4e4e4b7/include/Minuit2/Minuit2/MnGlobalCorrelationCoeff.h:34:31
    t.method("GlobalCC", static_cast<const std::vector<double> & (ROOT::Minuit2::MnGlobalCorrelationCoeff::*)()  const>(&ROOT::Minuit2::MnGlobalCorrelationCoeff::GlobalCC));

    DEBUG_MSG("Adding wrapper for bool ROOT::Minuit2::MnGlobalCorrelationCoeff::IsValid() (" __HERE__ ")");
    // signature to use in the veto list: bool ROOT::Minuit2::MnGlobalCorrelationCoeff::IsValid()
    // defined in /Users/mato/.julia/artifacts/4afa81fd17c8d2616a0895f609579f19a4e4e4b7/include/Minuit2/Minuit2/MnGlobalCorrelationCoeff.h:36:9
    t.method("IsValid", static_cast<bool (ROOT::Minuit2::MnGlobalCorrelationCoeff::*)()  const>(&ROOT::Minuit2::MnGlobalCorrelationCoeff::IsValid));
  }

private:
  std::unique_ptr<jlcxx::TypeWrapper<ROOT::Minuit2::MnGlobalCorrelationCoeff>> type_;
};
std::shared_ptr<Wrapper> newJlROOT_Minuit2_MnGlobalCorrelationCoeff(jlcxx::Module& module){
  return std::shared_ptr<Wrapper>(new JlROOT_Minuit2_MnGlobalCorrelationCoeff(module));
}

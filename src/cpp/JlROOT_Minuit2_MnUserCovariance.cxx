// this file was auto-generated by wrapit 5168a24-dirty
#include "Wrapper.h"

#include "jlMinuit2.h"
#include "dbg_msg.h"
#include "jlcxx/functions.hpp"
#include "jlcxx/stl.hpp"

namespace jlcxx {
  template<> struct IsMirroredType<ROOT::Minuit2::MnUserCovariance> : std::false_type { };
  template<> struct DefaultConstructible<ROOT::Minuit2::MnUserCovariance> : std::false_type { };
}

// Class generating the wrapper for type ROOT::Minuit2::MnUserCovariance
// signature to use in the veto file: ROOT::Minuit2::MnUserCovariance
struct JlROOT_Minuit2_MnUserCovariance: public Wrapper {

  JlROOT_Minuit2_MnUserCovariance(jlcxx::Module& jlModule): Wrapper(jlModule){
    DEBUG_MSG("Adding wrapper for type ROOT::Minuit2::MnUserCovariance (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/4afa81fd17c8d2616a0895f609579f19a4e4e4b7/include/Minuit2/Minuit2/MnUserCovariance.h:29:7
    jlcxx::TypeWrapper<ROOT::Minuit2::MnUserCovariance>  t = jlModule.add_type<ROOT::Minuit2::MnUserCovariance>("ROOT!Minuit2!MnUserCovariance");
    type_ = std::unique_ptr<jlcxx::TypeWrapper<ROOT::Minuit2::MnUserCovariance>>(new jlcxx::TypeWrapper<ROOT::Minuit2::MnUserCovariance>(jlModule, t));
  }

  void add_methods() const{
    auto& t = *type_;
    t.template constructor<>(/*finalize=*/jlcxx::finalize_policy::yes);


    DEBUG_MSG("Adding wrapper for void ROOT::Minuit2::MnUserCovariance::MnUserCovariance(const double *, unsigned int) (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/4afa81fd17c8d2616a0895f609579f19a4e4e4b7/include/Minuit2/Minuit2/MnUserCovariance.h:41:4
    t.constructor<const double *, unsigned int>(/*finalize=*/jlcxx::finalize_policy::yes);


    DEBUG_MSG("Adding wrapper for void ROOT::Minuit2::MnUserCovariance::MnUserCovariance(unsigned int) (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/4afa81fd17c8d2616a0895f609579f19a4e4e4b7/include/Minuit2/Minuit2/MnUserCovariance.h:46:4
    t.constructor<unsigned int>(/*finalize=*/jlcxx::finalize_policy::yes);

    DEBUG_MSG("Adding wrapper for double ROOT::Minuit2::MnUserCovariance::operator()(unsigned int, unsigned int) (" __HERE__ ")");
    // signature to use in the veto list: double ROOT::Minuit2::MnUserCovariance::operator()(unsigned int, unsigned int)
    // defined in /Users/mato/.julia/artifacts/4afa81fd17c8d2616a0895f609579f19a4e4e4b7/include/Minuit2/Minuit2/MnUserCovariance.h:48:11
    t.method("paren", static_cast<double (ROOT::Minuit2::MnUserCovariance::*)(unsigned int, unsigned int)  const>(&ROOT::Minuit2::MnUserCovariance::operator()));

    DEBUG_MSG("Adding wrapper for double & ROOT::Minuit2::MnUserCovariance::operator()(unsigned int, unsigned int) (" __HERE__ ")");
    // signature to use in the veto list: double & ROOT::Minuit2::MnUserCovariance::operator()(unsigned int, unsigned int)
    // defined in /Users/mato/.julia/artifacts/4afa81fd17c8d2616a0895f609579f19a4e4e4b7/include/Minuit2/Minuit2/MnUserCovariance.h:57:12
    t.method("paren", static_cast<double & (ROOT::Minuit2::MnUserCovariance::*)(unsigned int, unsigned int) >(&ROOT::Minuit2::MnUserCovariance::operator()));

    DEBUG_MSG("Adding wrapper for void ROOT::Minuit2::MnUserCovariance::Scale(double) (" __HERE__ ")");
    // signature to use in the veto list: void ROOT::Minuit2::MnUserCovariance::Scale(double)
    // defined in /Users/mato/.julia/artifacts/4afa81fd17c8d2616a0895f609579f19a4e4e4b7/include/Minuit2/Minuit2/MnUserCovariance.h:66:9
    t.method("Scale", static_cast<void (ROOT::Minuit2::MnUserCovariance::*)(double) >(&ROOT::Minuit2::MnUserCovariance::Scale));

    DEBUG_MSG("Adding wrapper for const std::vector<double> & ROOT::Minuit2::MnUserCovariance::Data() (" __HERE__ ")");
    // signature to use in the veto list: const std::vector<double> & ROOT::Minuit2::MnUserCovariance::Data()
    // defined in /Users/mato/.julia/artifacts/4afa81fd17c8d2616a0895f609579f19a4e4e4b7/include/Minuit2/Minuit2/MnUserCovariance.h:72:31
    t.method("Data", static_cast<const std::vector<double> & (ROOT::Minuit2::MnUserCovariance::*)()  const>(&ROOT::Minuit2::MnUserCovariance::Data));

    DEBUG_MSG("Adding wrapper for unsigned int ROOT::Minuit2::MnUserCovariance::Nrow() (" __HERE__ ")");
    // signature to use in the veto list: unsigned int ROOT::Minuit2::MnUserCovariance::Nrow()
    // defined in /Users/mato/.julia/artifacts/4afa81fd17c8d2616a0895f609579f19a4e4e4b7/include/Minuit2/Minuit2/MnUserCovariance.h:74:17
    t.method("Nrow", static_cast<unsigned int (ROOT::Minuit2::MnUserCovariance::*)()  const>(&ROOT::Minuit2::MnUserCovariance::Nrow));

    DEBUG_MSG("Adding wrapper for unsigned int ROOT::Minuit2::MnUserCovariance::size() (" __HERE__ ")");
    // signature to use in the veto list: unsigned int ROOT::Minuit2::MnUserCovariance::size()
    // defined in /Users/mato/.julia/artifacts/4afa81fd17c8d2616a0895f609579f19a4e4e4b7/include/Minuit2/Minuit2/MnUserCovariance.h:77:17
    t.method("size", static_cast<unsigned int (ROOT::Minuit2::MnUserCovariance::*)()  const>(&ROOT::Minuit2::MnUserCovariance::size));
  }

private:
  std::unique_ptr<jlcxx::TypeWrapper<ROOT::Minuit2::MnUserCovariance>> type_;
};
std::shared_ptr<Wrapper> newJlROOT_Minuit2_MnUserCovariance(jlcxx::Module& module){
  return std::shared_ptr<Wrapper>(new JlROOT_Minuit2_MnUserCovariance(module));
}

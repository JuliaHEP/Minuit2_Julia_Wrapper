// this file was auto-generated by wrapit 5168a24-dirty
#include "Wrapper.h"

#include "jlMinuit2.h"
#include "dbg_msg.h"
#include "jlcxx/functions.hpp"
#include "jlcxx/stl.hpp"

namespace jlcxx {
  template<> struct IsMirroredType<JuliaFcn> : std::false_type { };
  template<> struct DefaultConstructible<JuliaFcn> : std::false_type { };
template<> struct SuperType<JuliaFcn> { typedef ROOT::Minuit2::FCNBase type; };
}

// Class generating the wrapper for type JuliaFcn
// signature to use in the veto file: JuliaFcn
struct JlJuliaFcn: public Wrapper {

  JlJuliaFcn(jlcxx::Module& jlModule): Wrapper(jlModule){
    DEBUG_MSG("Adding wrapper for type JuliaFcn (" __HERE__ ")");
    // defined in ./cpp/Minuit2Wrap.h:19:7
    jlcxx::TypeWrapper<JuliaFcn>  t = jlModule.add_type<JuliaFcn>("JuliaFcn",
      jlcxx::julia_base_type<ROOT::Minuit2::FCNBase>());
    type_ = std::unique_ptr<jlcxx::TypeWrapper<JuliaFcn>>(new jlcxx::TypeWrapper<JuliaFcn>(jlModule, t));
  }

  void add_methods() const{
    auto& t = *type_;


    DEBUG_MSG("Adding wrapper for void JuliaFcn::JuliaFcn(fcn_f, double) (" __HERE__ ")");
    // defined in ./cpp/Minuit2Wrap.h:21:5
    t.constructor<fcn_f, double>(/*finalize=*/jlcxx::finalize_policy::yes);


    DEBUG_MSG("Adding wrapper for void JuliaFcn::JuliaFcn(fcn_f, fcn_g, double) (" __HERE__ ")");
    // defined in ./cpp/Minuit2Wrap.h:22:5
    t.constructor<fcn_f, fcn_g, double>(/*finalize=*/jlcxx::finalize_policy::yes);


    DEBUG_MSG("Adding wrapper for void JuliaFcn::JuliaFcn(cost_f, void *, double) (" __HERE__ ")");
    // defined in ./cpp/Minuit2Wrap.h:23:5
    t.constructor<cost_f, void *, double>(/*finalize=*/jlcxx::finalize_policy::yes);


    DEBUG_MSG("Adding wrapper for void JuliaFcn::JuliaFcn(cost_f, cost_g, void *, double) (" __HERE__ ")");
    // defined in ./cpp/Minuit2Wrap.h:24:5
    t.constructor<cost_f, cost_g, void *, double>(/*finalize=*/jlcxx::finalize_policy::yes);

    DEBUG_MSG("Adding wrapper for double JuliaFcn::Up() (" __HERE__ ")");
    // signature to use in the veto list: double JuliaFcn::Up()
    // defined in ./cpp/Minuit2Wrap.h:25:20
    t.method("Up", static_cast<double (JuliaFcn::*)()  const>(&JuliaFcn::Up));

    DEBUG_MSG("Adding wrapper for double JuliaFcn::operator()(const std::vector<double> &) (" __HERE__ ")");
    // signature to use in the veto list: double JuliaFcn::operator()(const std::vector<double> &)
    // defined in ./cpp/Minuit2Wrap.h:26:20
    t.method("paren", static_cast<double (JuliaFcn::*)(const std::vector<double> &)  const>(&JuliaFcn::operator()));

    DEBUG_MSG("Adding wrapper for std::vector<double> JuliaFcn::Gradient(const std::vector<double> &) (" __HERE__ ")");
    // signature to use in the veto list: std::vector<double> JuliaFcn::Gradient(const std::vector<double> &)
    // defined in ./cpp/Minuit2Wrap.h:27:33
    t.method("Gradient", static_cast<std::vector<double> (JuliaFcn::*)(const std::vector<double> &)  const>(&JuliaFcn::Gradient));

    DEBUG_MSG("Adding wrapper for bool JuliaFcn::HasGradient() (" __HERE__ ")");
    // signature to use in the veto list: bool JuliaFcn::HasGradient()
    // defined in ./cpp/Minuit2Wrap.h:33:18
    t.method("HasGradient", static_cast<bool (JuliaFcn::*)()  const>(&JuliaFcn::HasGradient));

    DEBUG_MSG("Adding wrapper for void JuliaFcn::SetErrorDef(double) (" __HERE__ ")");
    // signature to use in the veto list: void JuliaFcn::SetErrorDef(double)
    // defined in ./cpp/Minuit2Wrap.h:34:10
    t.method("SetErrorDef", static_cast<void (JuliaFcn::*)(double) >(&JuliaFcn::SetErrorDef));

    DEBUG_MSG("Adding wrapper for unsigned int JuliaFcn::Nfcn() (" __HERE__ ")");
    // signature to use in the veto list: unsigned int JuliaFcn::Nfcn()
    // defined in ./cpp/Minuit2Wrap.h:35:18
    t.method("Nfcn", static_cast<unsigned int (JuliaFcn::*)()  const>(&JuliaFcn::Nfcn));

    DEBUG_MSG("Adding wrapper for unsigned int JuliaFcn::Ngrad() (" __HERE__ ")");
    // signature to use in the veto list: unsigned int JuliaFcn::Ngrad()
    // defined in ./cpp/Minuit2Wrap.h:36:18
    t.method("Ngrad", static_cast<unsigned int (JuliaFcn::*)()  const>(&JuliaFcn::Ngrad));
  }

private:
  std::unique_ptr<jlcxx::TypeWrapper<JuliaFcn>> type_;
};
std::shared_ptr<Wrapper> newJlJuliaFcn(jlcxx::Module& module){
  return std::shared_ptr<Wrapper>(new JlJuliaFcn(module));
}

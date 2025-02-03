// this file was auto-generated by wrapit 5168a24-dirty
#include "Wrapper.h"

#include "jlMinuit2.h"
#include "dbg_msg.h"
#include "jlcxx/functions.hpp"
#include "jlcxx/stl.hpp"

namespace jlcxx {
  template<> struct IsMirroredType<ROOT::Minuit2::ModularFunctionMinimizer> : std::false_type { };
  template<> struct DefaultConstructible<ROOT::Minuit2::ModularFunctionMinimizer> : std::false_type { };
}

// Class generating the wrapper for type ROOT::Minuit2::ModularFunctionMinimizer
// signature to use in the veto file: ROOT::Minuit2::ModularFunctionMinimizer
struct JlROOT_Minuit2_ModularFunctionMinimizer: public Wrapper {

  JlROOT_Minuit2_ModularFunctionMinimizer(jlcxx::Module& jlModule): Wrapper(jlModule){
    DEBUG_MSG("Adding wrapper for type ROOT::Minuit2::ModularFunctionMinimizer (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/4afa81fd17c8d2616a0895f609579f19a4e4e4b7/include/Minuit2/Minuit2/ModularFunctionMinimizer.h:41:7
    jlcxx::TypeWrapper<ROOT::Minuit2::ModularFunctionMinimizer>  t = jlModule.add_type<ROOT::Minuit2::ModularFunctionMinimizer>("ROOT!Minuit2!ModularFunctionMinimizer");
    type_ = std::unique_ptr<jlcxx::TypeWrapper<ROOT::Minuit2::ModularFunctionMinimizer>>(new jlcxx::TypeWrapper<ROOT::Minuit2::ModularFunctionMinimizer>(jlModule, t));
  }

  void add_methods() const{
    auto& t = *type_;
  }

private:
  std::unique_ptr<jlcxx::TypeWrapper<ROOT::Minuit2::ModularFunctionMinimizer>> type_;
};
std::shared_ptr<Wrapper> newJlROOT_Minuit2_ModularFunctionMinimizer(jlcxx::Module& module){
  return std::shared_ptr<Wrapper>(new JlROOT_Minuit2_ModularFunctionMinimizer(module));
}

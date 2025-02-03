# Minuit2 Julia Wrapper

C++ files have been generated with [WrapIt](https://github.com/grasph/wrapit) using the input files `Minuit2.wit` and `Minuit2-veto.h`. 

```Julia
using CxxWrap
using WrapIt
using Minuit2_jll

#---Build the wrapper library----------------------------------------------------------------------
if Sys.isapple()
    ENV["SDKROOT"]=readchomp(`xcrun --sdk macosx --show-sdk-path`)
end

cxxwrap_prefix = CxxWrap.prefix_path()
minuit2_prefix = Minuit2_jll.artifact_dir
julia_prefix = dirname(Sys.BINDIR)

#---Generate the wrapper code----------------------------------------------------------------------
wit = joinpath(@__DIR__, "Minuit2.wit")
witin = joinpath(@__DIR__, "Minuit2.wit.in")
open(wit, "w") do f
    for l in eachline(witin)
	println(f, replace(l, "@Minuit2_INCLUDE_DIR@" => "$minuit2_prefix/include",
                          "@Julia_INCLUDE_DIR@" => "$julia_prefix/include/julia",
                          "@JlCxx_INCLUDE_DIR@" => "$cxxwrap_prefix/include",
                          "@CxxWrap_VERSION@" => "$(pkgversion(CxxWrap))"))
    end
end

WrapIt.install()
rc = wrapit(wit, force=true, cmake=false, verbosity=1)
if !isnothing(rc) && rc != 0
    println(stderr, "Failed to produce wrapper code with the wrapit function. Exited with code ", rc, ".")
    exit(rc)
end
```
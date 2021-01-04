# Note that this script can accept some limited command-line arguments, run
# `julia build_tarballs.jl --help` to see a usage message.
using BinaryBuilder
using Pkg

# Collection of sources required to build LCIOWrapBuilder
sources = [
    DirectorySource("Minuit2_Julia_Wrapper")
]

julia_version = v"1.5.3"

name = "Minuit2_Julia_Wrapper"
version = v"0.1.1"

# Bash recipe for building across all platforms
script = raw"""
	mkdir build && cd build
	cmake -DJulia_PREFIX=${prefix} -DCMAKE_INSTALL_PREFIX=$prefix -DCMAKE_TOOLCHAIN_FILE=${CMAKE_TARGET_TOOLCHAIN} -DCMAKE_BUILD_TYPE=Release -DCMAKE_FIND_ROOT_PATH=${prefix} ..
	VERBOSE=ON cmake --build . --config Release --target install
"""

# These are the platforms we will build for by default, unless further
# platforms are passed in on the command line
platforms = Platform[
    Linux(:x86_64, libc=:glibc, compiler_abi=CompilerABI(cxxstring_abi=:cxx11)),
]

# The products that we will ensure are always built
products = [
    LibraryProduct("libminuit2wrap", :minuit2wrap)
]

# Dependencies that must be installed before this package can be built
dependencies = [
	Dependency(PackageSpec(name="libcxxwrap_julia_jll",version=v"0.8.5")),
	Dependency(PackageSpec(name="Minuit2_jll")),
	BuildDependency(PackageSpec(name="libjulia_jll", version=julia_version))
]

build_tarballs(ARGS, name, version, sources, script, platforms, products, dependencies; 
    preferred_gcc_version=v"8", julia_compat = "^$(julia_version.major).$(julia_version.minor)")

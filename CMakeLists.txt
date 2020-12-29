cmake_minimum_required(VERSION 3.1)

project(minuit2wrapper)
# Cmake policies
# ==============
if(POLICY CMP0074)
    # find_package() uses <PackageName>_ROOT variables.
    # This policy was introduced in CMake version 3.12.
    cmake_policy(SET CMP0074 NEW)
endif()

# this helps Libdl.dlopen find the right paths
set(CMAKE_INSTALL_RPATH "${CMAKE_INSTALL_PREFIX}/lib;${Minuit2_LIBRARY_DIRS};${Julia_LIBRARY_DIR}")
set(CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR})
set(CMAKE_INSTALL_LIBDIR "lib")
set(CMAKE_INSTALL_RPATH_USE_LINK_PATH TRUE)
# Special setting for MacOS X
set(CMAKE_MACOSX_RPATH 1)

if(MSVC)
        set(CMAKE_RUNTIME_OUTPUT_DIRECTORY  "${CMAKE_BINARY_DIR}/bin")
else()
        set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib")
endif()

# includes
# ============
include(CheckCXXCompilerFlag)
include(CMakePackageConfigHelpers)
include(GenerateExportHeader)
include(GNUInstallDirs)
include(InstallRequiredSystemLibraries)

if(CMAKE_CXX_COMPILER_ID MATCHES "Clang" OR CMAKE_CXX_COMPILER_ID MATCHES "GNU" OR CMAKE_CXX_COMPILER_ID MATCHES "Intel")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wunused-parameter -Wextra -Wreorder")
endif()
set(CMAKE_CXX_STANDARD 17)
add_definitions(-DJULIA_ENABLE_THREADING)

find_package(Minuit2 REQUIRED)

# JlCxx_DIR needs to be passed in with -D
find_package(JlCxx REQUIRED )

# this snippet prints out all available variable names
# from: https://stackoverflow.com/questions/9298278/cmake-print-out-all-accessible-variables-in-a-script
# get_cmake_property(_variableNames VARIABLES)
# list (SORT _variableNames)
# foreach (_variableName ${_variableNames})
#     message(STATUS "${_variableName}=${${_variableName}}")
# endforeach()

include_directories(${CMAKE_SOURCE_DIR}/include)
include_directories(${INTERFACE_INCLUDE_DIRECTORIES})
include_directories(${Minuit2_INCLUDE_DIRS}/Minuit2)
include_directories(${Minuit2_DIR}/../../../include/Minuit2)

add_library(minuit2wrap SHARED src/minuit2Wrap.cxx )
target_link_libraries(minuit2wrap ${Minuit2_LIBRARY} JlCxx::cxxwrap_julia JlCxx::cxxwrap_julia_stl Minuit2::Minuit2Math Minuit2::Minuit2)

install(TARGETS
  minuit2wrap
LIBRARY DESTINATION lib${LIBDIR_SUFFIX}
ARCHIVE DESTINATION lib${LIBDIR_SUFFIX}
RUNTIME DESTINATION lib${LIBDIR_SUFFIX}
INCLUDES DESTINATION include)

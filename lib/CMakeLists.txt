cmake_minimum_required(VERSION 3.10)

project(keystone-lib ASM C CXX)

include(${src_dir}/macros.cmake)

global_set(lib_src_dir ${src_dir}/lib)
global_set(lib_inc_dir ${src_dir}/include)

set(libmodules              enclave edge host verifier glibc syscall)
set(enabled_libmodules      enclave edge host glibc)

include_directories(${lib_inc_dir})

foreach(module ${enabled_libmodules})
    add_subdirectory(${module})
endforeach()

cmake_minimum_required(VERSION 3.10)

project(hello C ASM)

#-------------------------------------------------------------------------------
# BASIC SETUP
#-------------------------------------------------------------------------------

set(prog_name       hello)
set(src_dir         ${CMAKE_SOURCE_DIR})
set(bin_dir         ${CMAKE_BINARY_DIR})

if (OUTPUT_DIR)
    set(output_dir      ${OUTPUT_DIR})
else()
    set(output_dir      ${src_dir}/bin)
endif()

set(BUILD_ENCLAVE_APP   "yes")
set(BUILD_HOST_APP      "yes")
set(BUILD_EYRIE         "no")

if ($ENV{KEYSTONE_SDK_DIR} STREQUAL "") 
    message(FATAL_ERROR "KEYSTONE_SDK_DIR is not set")
else()
    message(STATUS "Keystone SDK directory: $ENV{KEYSTONE_SDK_DIR}")
endif()

#-------------------------------------------------------------------------------
# Program and flags
#-------------------------------------------------------------------------------

include($ENV{KEYSTONE_SDK_DIR}/macros.cmake)

if (NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE    "Debug")
else()
    if ((NOT CMAKE_BUILD_TYPE STREQUAL "Debug") AND (NOT CMAKE_BUILD_TYPE STREQUAL "Release"))
        message(FATAL_ERROR "CMAKE_BUILD_TYPE must either be Debug 
                              or Release instead of ${CMAKE_BUILD_TYPE}")
    endif()
endif()

if (CMAKE_BUILD_TYPE STREQUAL "Debug")
    add_definitions(-DDEBUG=1)
endif()

execute_process(
    COMMAND which riscv64-unknown-linux-gnu-gcc
    OUTPUT_VARIABLE CROSSCOMPILE
    RESULT_VARIABLE ERROR)
    
if (NOT "${ERROR}" STREQUAL 0)
    message(FATAL_ERROR "RISCV Toochain is not found")
endif()

string(STRIP ${CROSSCOMPILE} CROSSCOMPILE)
string(REPLACE "gcc" "" CROSSCOMPILE ${CROSSCOMPILE})

message(STATUS "Tagret tripplet: ${CROSSCOMPILE}")

set(CC              ${CROSSCOMPILE}gcc)
set(CXX             ${CROSSCOMPILE}g++)
set(LD              ${CROSSCOMPILE}ld)
set(AR              ${CROSSCOMPILE}ar)
set(OBJCOPY         ${CROSSCOMPILE}objcopy)
set(OBJDUMP         ${CROSSCOMPILE}objdump)

global_set(CMAKE_C_COMPILER        ${CC}${EXT})
global_set(CMAKE_CXX_COMPILER      ${CXX}${EXT})
global_set(CMAKE_LINKER            ${LD}${EXT})
global_set(CMAKE_AR                ${AR}${EXT})
global_set(CMAKE_OBJCOPY           ${OBJCOPY}${EXT})
global_set(CMAKE_OBJDUMP           ${OBJDUMP}${EXT})

check_compiler(${CMAKE_C_COMPILER})
check_compiler(${CMAKE_CXX_COMPILER})

global_set(CMAKE_C_COMPILER_WORKS      1)
global_set(CMAKE_CXX_COMPILER_WORKS    1)

global_set(CMAKE_SYSTEM_NAME    "Linux")

################################################################################
# BUILD PROJECTS
################################################################################

if (NOT ENCLAVE_APP)
    message(FATAL_ERROR "Enclave app is not set")
elseif (BUILD_ENCLAVE_APP)
    add_subdirectory(${ENCLAVE_APP})
    message(STATUS "Enclave app: ${ENCLAVE_APP}")
endif()

if (NOT HOST_APP) 
    message(FATAL_ERROR "Host app is not set")
elseif (BUILD_HOST_APP)
    add_subdirectory(${HOST_APP})
    message(STATUS "Host app: ${HOST_APP}")
endif()

if (BUILD_EYRIE)
    set(EYRIE_DIR       $ENV{KEYSTONE_SDK_DIR}/rts/eyrie)
    add_custom_target(install
        COMMAND ${EYRIE_DIR}/build.sh ${EYRIE_PLUGINS}
        )
endif()





    







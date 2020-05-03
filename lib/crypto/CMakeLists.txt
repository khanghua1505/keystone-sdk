cmake_minimum_required(VERSION 3.10)

project(keystone-crypto C ASM)

include(${src_dir}/macros.cmake)

global_set(MODULES_SOURCE_FILES  "")

set(CFLAGS      "-Wall -Werror")
set(LDFLAGS     "-static -nostdlib")

global_set(CMAKE_C_FLAGS           "${CMAKE_C_FLAGS} ${CFLAGS}")
global_set(CMAKE_EXE_LINKER_FLAGS  "${CMAKE_EXE_LINKER_FLAGS} ${LDFLAGS}")

set(libmodules              
        ciphers 
        encauth 
        hashes 
        mac 
        math 
        misc 
        modes 
        pk 
        prngs 
        stream
    )
    
set(enabled_libmodules      
        pk
    )

include_directories(headers)

foreach(module ${enabled_libmodules})
    add_subdirectory(${module})
endforeach()

add_library(${PROJECT_NAME} ${MODULES_SOURCE_FILES})
target_include_directories(${PROJECT_NAME} PUBLIC headers)

install(TARGETS ${PROJECT_NAME} DESTINATION ${out_dir})



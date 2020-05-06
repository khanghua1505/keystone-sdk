cmake_minimum_required(VERSION 3.10)

project(keystone-glibc C ASM)

set(CFLAGS      "-Wall -Werror")
set(LDFLAGS     "-static")

set(SOURCE_FILES 
        malloc.c
        string.c
        internal/tinyprintf.c)

set(CMAKE_C_FLAGS          "${CMAKE_C_FLAGS} ${CFLAGS}")
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} ${LDFLAGS}")

add_library(${PROJECT_NAME} ${SOURCE_FILES})

target_include_directories(${PROJECT_NAME} PUBLIC ${lib_inc_dir})

install(TARGETS ${PROJECT_NAME} DESTINATION ${out_dir})


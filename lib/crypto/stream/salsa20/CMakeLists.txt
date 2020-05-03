cmake_minimum_required(VERSION 3.10)

project(crypto-stream-salsa20 C ASM)

set(CFLAGS      "-Wall -Werror")
set(LDFLAGS     "-static")

set(SOURCE_FILES 
    salsa20_crypt.c
    salsa20_done.c
    salsa20_ivctr64.c
    salsa20_keystream.c
    salsa20_memory.c
    salsa20_setup.c
    salsa20_test.c
    xsalsa20_memory.c
    xsalsa20_setup.c
    )

set(CMAKE_C_FLAGS          "${CMAKE_C_FLAGS} ${CFLAGS}")
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} ${LDFLAGS}")

add_library(${PROJECT_NAME} ${SOURCE_FILES})

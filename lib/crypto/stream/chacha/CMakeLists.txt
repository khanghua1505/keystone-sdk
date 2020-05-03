cmake_minimum_required(VERSION 3.10)

project(crypto-stream-chacha C ASM)

set(CFLAGS      "-Wall -Werror")
set(LDFLAGS     "-static")

set(SOURCE_FILES 
        chacha_crypt.c
        chacha_done.c
        chacha_ivctr32.c
        chacha_ivctr64.c
        chacha_keystream.c
        chacha_memory.c
        chacha_setup.c
    )

set(CMAKE_C_FLAGS          "${CMAKE_C_FLAGS} ${CFLAGS}")
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} ${LDFLAGS}")

add_library(${PROJECT_NAME} ${SOURCE_FILES})

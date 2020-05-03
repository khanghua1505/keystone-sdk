cmake_minimum_required(VERSION 3.10)

project(crypto-prngs C ASM)

set(CFLAGS      "-Wall -Werror")
set(LDFLAGS     "-static")

set(SOURCE_FILES 
        chacha20.c
        fortuna.c
        rc4.c
        rng_get_bytes.c
        rng_make_prng.c
        sober128.c
        sprng.c
        yarrow.c
    )

set(CMAKE_C_FLAGS          "${CMAKE_C_FLAGS} ${CFLAGS}")
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} ${LDFLAGS}")

add_library(${PROJECT_NAME} ${SOURCE_FILES})

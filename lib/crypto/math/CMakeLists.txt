cmake_minimum_required(VERSION 3.10)

project(crypto-math C ASM)

set(CFLAGS      "-Wall -Werror")
set(LDFLAGS     "-static")

set(SOURCE_FILES 
        gmp_desc.c
        ltm_desc.c
        multi.c
        radix_to_bin.c
        rand_bn.c
        rand_prime.c
        tfm_desc.c
        fp/ltc_ecc_fp_mulmod.c
    )

set(CMAKE_C_FLAGS          "${CMAKE_C_FLAGS} ${CFLAGS}")
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} ${LDFLAGS}")

add_library(${PROJECT_NAME} ${SOURCE_FILES})

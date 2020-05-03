cmake_minimum_required(VERSION 3.10)

project(crypto-pk-pkcs1 C ASM)

set(CFLAGS      "-Wall -Werror")
set(LDFLAGS     "-static")

set(SOURCE_FILES 
       pkcs_1_i2osp.c
       pkcs_1_mgf1.c
       pkcs_1_oaep_decode.c
       pkcs_1_oaep_encode.c
       pkcs_1_os2ip.c
       pkcs_1_pss_decode.c
       pkcs_1_pss_encode.c
       pkcs_1_v1_5_decode.c
       pkcs_1_v1_5_encode.c
    )

set(CMAKE_C_FLAGS          "${CMAKE_C_FLAGS} ${CFLAGS}")
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} ${LDFLAGS}")

add_library(${PROJECT_NAME} ${SOURCE_FILES})

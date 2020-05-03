cmake_minimum_required(VERSION 3.10)

project(crypto-pk-dsa C ASM)

set(CFLAGS      "-Wall -Werror")
set(LDFLAGS     "-static")

set(SOURCE_FILES 
        dsa_decrypt_key.c
        dsa_encrypt_key.c
        dsa_export.c
        dsa_free.c
        dsa_generate_key.c
        dsa_generate_pqg.c
        dsa_import.c
        dsa_make_key.c
        dsa_set_pqg_dsaparam.c
        dsa_set.c
        dsa_shared_secret.c
        dsa_sign_hash.c
        dsa_verify_hash.c
        dsa_verify_key.c
    )

set(CMAKE_C_FLAGS          "${CMAKE_C_FLAGS} ${CFLAGS}")
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} ${LDFLAGS}")

add_library(${PROJECT_NAME} ${SOURCE_FILES})

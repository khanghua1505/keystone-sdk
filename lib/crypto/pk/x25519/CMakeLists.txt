cmake_minimum_required(VERSION 3.10)

project(crypto-pk-x25519 C ASM)

set(CFLAGS      "-Wall -Werror")
set(LDFLAGS     "-static")

set(SOURCE_FILES 
       x25519_export.c
       x25519_import_pkcs8.c
       x25519_import_raw.c
       x25519_import_x509.c
       x25519_import.c
       x25519_make_key.c
       x25519_shared_secret.c
    )

set(CMAKE_C_FLAGS          "${CMAKE_C_FLAGS} ${CFLAGS}")
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} ${LDFLAGS}")

add_library(${PROJECT_NAME} ${SOURCE_FILES})

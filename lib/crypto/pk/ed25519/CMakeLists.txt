cmake_minimum_required(VERSION 3.10)

include(${src_dir}/macros.cmake)

project(crypto-pk-ed25519 C ASM)

set(CFLAGS      "-Wall -Werror")
set(LDFLAGS     "-static")

set(SOURCE_FILES 
       ed25519_export.c
       ed25519_import_pkcs8.c
       ed25519_import_raw.c
       ed25519_import_x509.c
       ed25519_import.c
       ed25519_make_key.c
       ed25519_sign.c
       ed25519_verify.c
    )

set(_SOURCE_FILES "")
    
foreach(filename ${SOURCE_FILES})
    list(APPEND _SOURCE_FILES ${CMAKE_CURRENT_SOURCE_DIR}/${filename})
endforeach()
    
global_set(MODULES_SOURCE_FILES "${MODULES_SOURCE_FILES};${_SOURCE_FILES}")

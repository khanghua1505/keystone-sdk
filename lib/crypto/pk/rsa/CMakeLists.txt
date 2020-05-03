cmake_minimum_required(VERSION 3.10)

include(${src_dir}/macros.cmake)

set(SOURCE_FILES 
       rsa_decrypt_key.c
       rsa_encrypt_key.c
       rsa_export.c
       rsa_exptmod.c
       rsa_get_size.c
       rsa_import_pkcs8.c
       rsa_import_x509.c
       rsa_import.c
       rsa_key.c
       rsa_make_key.c
       rsa_set.c
       rsa_sign_hash.c
       rsa_sign_saltlen_get.c
       rsa_verify_hash.c
    )
    
set(_SOURCE_FILES "")
    
foreach(filename ${SOURCE_FILES})
    list(APPEND _SOURCE_FILES ${CMAKE_CURRENT_SOURCE_DIR}/${filename})
endforeach()
    
global_set(MODULES_SOURCE_FILES "${MODULES_SOURCE_FILES};${_SOURCE_FILES}")

 


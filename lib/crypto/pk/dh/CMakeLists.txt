cmake_minimum_required(VERSION 3.10)

include(${src_dir}/macros.cmake)

set(SOURCE_FILES 
        dh_check_pubkey.c
        dh_export_key.c
        dh_export.c
        dh_free.c
        dh_generate_key.c
        dh_import.c
        dh_set_pg_dhparam.c
        dh_set.c
        dh_shared_secret.c
        dh.c
    )

foreach(filename ${SOURCE_FILES})
    list(APPEND _SOURCE_FILES ${CMAKE_CURRENT_SOURCE_DIR}/${filename})
endforeach()
    
global_set(MODULES_SOURCE_FILES "${MODULES_SOURCE_FILES};${_SOURCE_FILES}")


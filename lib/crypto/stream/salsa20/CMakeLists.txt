cmake_minimum_required(VERSION 3.10)

include(${src_dir}/macros.cmake)

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

foreach(filename ${SOURCE_FILES})
    list(APPEND _SOURCE_FILES ${CMAKE_CURRENT_SOURCE_DIR}/${filename})
endforeach()
    
global_set(MODULES_SOURCE_FILES "${MODULES_SOURCE_FILES};${_SOURCE_FILES}")


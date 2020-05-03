cmake_minimum_required(VERSION 3.10)

include(${src_dir}/macros.cmake)

set(SOURCE_FILES 
        blake2/blake2bmac_file.c
        blake2/blake2bmac_memory_multi.c
        blake2/blake2bmac_memory.c
        blake2/blake2bmac.c
        blake2/blake2smac_file.c
        blake2/blake2smac_memory_multi.c
        blake2/blake2smac_memory.c
        blake2/blake2smac.c
        f9/f9_done.c
        f9/f9_file.c
        f9/f9_init.c
        f9/f9_memory_multi.c
        f9/f9_memory.c
        f9/f9_process.c
        hmac/hmac_done.c
        hmac/hmac_file.c
        hmac/hmac_init.c
        hmac/hmac_memory_multi.c
        hmac/hmac_memory.c
        hmac/hmac_process.c
        omac/omac_done.c
        omac/omac_file.c
        omac/omac_init.c
        omac/omac_memory_multi.c
        omac/omac_memory.c
        omac/omac_process.c
        pelican/pelican_memory.c
        pelican/pelican.c
        pmac/pmac_done.c
        pmac/pmac_file.c
        pmac/pmac_init.c
        pmac/pmac_memory_multi.c
        pmac/pmac_memory.c
        pmac/pmac_ntz.c
        pmac/pmac_process.c
        pmac/pmac_shift_xor.c
        poly1305/poly1305_file.c
        poly1305/poly1305_memory_multi.c
        poly1305/poly1305_memory.c
        poly1305/poly1305.c
        xcbc/xcbc_done.c
        xcbc/xcbc_file.c
        xcbc/xcbc_init.c
        xcbc/xcbc_memory_multi.c
        xcbc/xcbc_memory.c
        xcbc/xcbc_process.c
    )

foreach(filename ${SOURCE_FILES})
    list(APPEND _SOURCE_FILES ${CMAKE_CURRENT_SOURCE_DIR}/${filename})
endforeach()
    
global_set(MODULES_SOURCE_FILES "${MODULES_SOURCE_FILES};${_SOURCE_FILES}")

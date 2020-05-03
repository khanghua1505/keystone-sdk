cmake_minimum_required(VERSION 3.10)

include(${src_dir}/macros.cmake)

set(SOURCE_FILES 
        blake2b.c
        blake2s.c
        md2.c
        md4.c
        md5.c
        rmd128.c
        rmd160.c
        rmd256.c
        rmd320.c
        sha1.c
        sha3.c
        tiger.c
        chc/chc.c
        helper/hash_file.c
        helper/hash_filehandle.c
        helper/hash_memory_multi.c
        helper/hash_memory.c
        sha2/sha224.c
        sha2/sha256.c
        sha2/sha384.c
        sha2/sha512_224.c
        sha2/sha512_256.c
        sha2/sha512.c
        whirl/whirl.c
        whirl/whirltab.c
    )

foreach(filename ${SOURCE_FILES})
    list(APPEND _SOURCE_FILES ${CMAKE_CURRENT_SOURCE_DIR}/${filename})
endforeach()
    
global_set(MODULES_SOURCE_FILES "${MODULES_SOURCE_FILES};${_SOURCE_FILES}")

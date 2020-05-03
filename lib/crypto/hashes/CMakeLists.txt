cmake_minimum_required(VERSION 3.10)

project(crypto-hashes C ASM)

set(CFLAGS      "-Wall -Werror")
set(LDFLAGS     "-static")

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

set(CMAKE_C_FLAGS          "${CMAKE_C_FLAGS} ${CFLAGS}")
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} ${LDFLAGS}")

add_library(${PROJECT_NAME} ${SOURCE_FILES})

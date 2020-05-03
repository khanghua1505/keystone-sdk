cmake_minimum_required(VERSION 3.10)

project(crypto-modes C ASM)

set(CFLAGS      "-Wall -Werror")
set(LDFLAGS     "-static -nostdlib")

set(SOURCE_FILES 
        anubis.c 
        blowfish.c 
        camellia.c
        cast5.c 
        des.c 
        idea.c 
        kasumi.c
        khazad.c 
        kseed.c 
        multi2.c 
        noekeon.c
        rc2.c 
        rc5.c 
        rc6.c 
        serpent.c 
        skipjack.c
        tea.c 
        xtea.c 
        aes/aes_tab.c 
        aes/aes.c
        safer/safer_tab.c 
        safer/safer.c
        safer/saferp.c
    )

set(CMAKE_C_FLAGS          "${CMAKE_C_FLAGS} ${CFLAGS}")
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} ${LDFLAGS}")

add_library(${PROJECT_NAME} ${SOURCE_FILES})

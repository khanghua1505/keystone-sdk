cmake_minimum_required(VERSION 3.10)

include(${src_dir}/macros.cmake)

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

foreach(filename ${SOURCE_FILES})
    list(APPEND _SOURCE_FILES ${CMAKE_CURRENT_SOURCE_DIR}/${filename})
endforeach()
    
global_set(MODULES_SOURCE_FILES "${MODULES_SOURCE_FILES};${_SOURCE_FILES}")

cmake_minimum_required(VERSION 3.10)

include(${src_dir}/macros.cmake)

set(SOURCE_FILES 
        cbc/cbc_decrypt.c
        cbc/cbc_done.c
        cbc/cbc_encrypt.c
        cbc/cbc_getiv.c
        cbc/cbc_setiv.c
        cbc/cbc_start.c
        cfb/cfb_decrypt.c
        cfb/cfb_done.c
        cfb/cfb_encrypt.c
        cfb/cfb_getiv.c
        cfb/cfb_setiv.c
        cfb/cfb_start.c
        ctr/ctr_decrypt.c
        ctr/ctr_done.c
        ctr/ctr_encrypt.c
        ctr/ctr_getiv.c
        ctr/ctr_setiv.c
        ctr/ctr_start.c
        ecb/ecb_decrypt.c
        ecb/ecb_done.c
        ecb/ecb_encrypt.c
        ecb/ecb_start.c
        f8/f8_decrypt.c
        f8/f8_done.c
        f8/f8_encrypt.c
        f8/f8_getiv.c
        f8/f8_setiv.c
        f8/f8_start.c
        lrw/lrw_decrypt.c
        lrw/lrw_done.c
        lrw/lrw_encrypt.c
        lrw/lrw_getiv.c
        lrw/lrw_process.c
        lrw/lrw_setiv.c
        lrw/lrw_start.c
        ofb/ofb_decrypt.c
        ofb/ofb_done.c
        ofb/ofb_encrypt.c
        ofb/ofb_getiv.c
        ofb/ofb_setiv.c
        ofb/ofb_start.c
        xts/xts_decrypt.c
        xts/xts_done.c
        xts/xts_encrypt.c
        xts/xts_init.c
        xts/xts_mult_x.c
    )

foreach(filename ${SOURCE_FILES})
    list(APPEND _SOURCE_FILES ${CMAKE_CURRENT_SOURCE_DIR}/${filename})
endforeach()
    
global_set(MODULES_SOURCE_FILES "${MODULES_SOURCE_FILES};${_SOURCE_FILES}")

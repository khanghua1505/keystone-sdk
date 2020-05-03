cmake_minimum_required(VERSION 3.10)

project(crypto-encauth C ASM)

set(CFLAGS      "-Wall -Werror")
set(LDFLAGS     "-static")

set(SOURCE_FILES 
        ccm/ccm_add_aad.c
        ccm/ccm_add_nonce.c
        ccm/ccm_done.c
        ccm/ccm_init.c
        ccm/ccm_memory.c
        ccm/ccm_process.c
        ccm/ccm_reset.c
        chachapoly/chacha20poly1305_add_aad.c
        chachapoly/chacha20poly1305_decrypt.c
        chachapoly/chacha20poly1305_done.c
        chachapoly/chacha20poly1305_encrypt.c
        chachapoly/chacha20poly1305_init.c
        chachapoly/chacha20poly1305_memory.c
        chachapoly/chacha20poly1305_setiv_rfc7905.c
        chachapoly/chacha20poly1305_setiv.c
        chachapoly/chacha20poly1305_test.c
        eax/eax_addheader.c
        eax/eax_decrypt_verify_memory.c
        eax/eax_decrypt.c
        eax/eax_done.c
        eax/eax_encrypt_authenticate_memory.c
        eax/eax_encrypt.c
        eax/eax_init.c
        gcm/gcm_add_aad.c
        gcm/gcm_add_iv.c
        gcm/gcm_done.c
        gcm/gcm_gf_mult.c
        gcm/gcm_init.c
        gcm/gcm_memory.c
        gcm/gcm_mult_h.c
        gcm/gcm_process.c
        gcm/gcm_reset.c
        ocb/ocb_decrypt_verify_memory.c
        ocb/ocb_decrypt.c
        ocb/ocb_done_decrypt.c
        ocb/ocb_done_encrypt.c
        ocb/ocb_encrypt_authenticate_memory.c
        ocb/ocb_encrypt.c
        ocb/ocb_init.c
        ocb/ocb_ntz.c
        ocb/ocb_shift_xor.c
        ocb/s_ocb_done.c
        ocb3/ocb3_add_aad.c
        ocb3/ocb3_decrypt_last.c
        ocb3/ocb3_decrypt_verify_memory.c
        ocb3/ocb3_decrypt.c
        ocb3/ocb3_done.c
        ocb3/ocb3_encrypt_authenticate_memory.c
        ocb3/ocb3_encrypt_last.c
        ocb3/ocb3_encrypt.c
        ocb3/ocb3_init.c
        ocb3/ocb3_int_ntz.c
        ocb3/ocb3_int_xor_blocks.c
    )

set(CMAKE_C_FLAGS          "${CMAKE_C_FLAGS} ${CFLAGS}")
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} ${LDFLAGS}")

add_library(${PROJECT_NAME} ${SOURCE_FILES})

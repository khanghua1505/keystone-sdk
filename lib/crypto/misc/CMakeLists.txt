cmake_minimum_required(VERSION 3.10)

include(${src_dir}/macros.cmake)

set(SOURCE_FILES 
        adler32.c
        burn_stack.c
        compare_testvector.c
        copy_or_zeromem.c
        crc32.c
        error_to_string.c
        mem_neq.c
        zeromem.c
        base16/base16_decode.c
        base16/base16_encode.c
        base32/base32_decode.c
        base32/base32_encode.c
        base64/base64_decode.c
        base64/base64_encode.c
        bcrypt/bcrypt.c
        crypt/crypt_argchk.c
        crypt/crypt_cipher_descriptor.c
        crypt/crypt_cipher_is_valid.c
        crypt/crypt_constants.c
        crypt/crypt_find_cipher_any.c
        crypt/crypt_find_cipher_id.c
        crypt/crypt_find_cipher.c
        crypt/crypt_find_hash_any.c
        crypt/crypt_find_hash_id.c
        crypt/crypt_find_hash_oid.c
        crypt/crypt_find_hash.c
        crypt/crypt_find_prng.c
        crypt/crypt_fsa.c
        crypt/crypt_hash_descriptor.c
        crypt/crypt_hash_is_valid.c
        crypt/crypt_inits.c
        crypt/crypt_ltc_mp_descriptor.c
        crypt/crypt_prng_descriptor.c
        crypt/crypt_prng_is_valid.c
        crypt/crypt_prng_rng_descriptor.c
        crypt/crypt_register_all_ciphers.c
        crypt/crypt_register_all_hashes.c
        crypt/crypt_register_all_prngs.c
        crypt/crypt_register_cipher.c
        crypt/crypt_register_hash.c
        crypt/crypt_register_prng.c
        crypt/crypt_sizes.c
        crypt/crypt_unregister_cipher.c
        crypt/crypt_unregister_hash.c
        crypt/crypt_unregister_prng.c
        crypt/crypt.c
        hkdf/hkdf.c
        padding/padding_depad.c
        padding/padding_pad.c
        pbes/pbes.c
        pbes/pbes1.c
        pbes/pbes2.c
        pkcs5/pkcs_5_1.c
        pkcs5/pkcs_5_2.c
        pkcs12/pkcs12_kdf.c
        pkcs12/pkcs12_utf8_to_utf16.c
        ssh/ssh_decode_sequence_multi.c
        ssh/ssh_encode_sequence_multi.c
    )

foreach(filename ${SOURCE_FILES})
    list(APPEND _SOURCE_FILES ${CMAKE_CURRENT_SOURCE_DIR}/${filename})
endforeach()
    
global_set(MODULES_SOURCE_FILES "${MODULES_SOURCE_FILES};${_SOURCE_FILES}")


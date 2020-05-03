cmake_minimum_required(VERSION 3.10)

project(crypto-pk-ecc C ASM)

set(CFLAGS      "-Wall -Werror")
set(LDFLAGS     "-static")

set(SOURCE_FILES 
       ecc_ansi_x963_export.c
       ecc_ansi_x963_import.c
       ecc_decrypt_key.c
       ecc_encrypt_key.c
       ecc_export_openssl.c
       ecc_export.c
       ecc_find_curve.c
       ecc_free.c
       ecc_get_key.c
       ecc_get_oid_str.c
       ecc_get_size.c
       ecc_import_openssl.c
       ecc_import_pkcs8.c
       ecc_import_x509.c
       ecc_import.c
       ecc_make_key.c
       ecc_recover_key.c
       ecc_set_curve_internal.c
       ecc_set_curve.c
       ecc_set_key.c
       ecc_shared_secret.c
       ecc_sign_hash.c
       ecc_sizes.c
       ecc_ssh_ecdsa_encode_name.c
       ecc_verify_hash.c
       ecc.c
       ltc_ecc_export_point.c
       ltc_ecc_import_point.c
       ltc_ecc_is_point_at_infinity.c
       ltc_ecc_is_point.c
       ltc_ecc_map.c
       ltc_ecc_mul2add.c
       ltc_ecc_mulmod_timing.c
       ltc_ecc_mulmod.c
       ltc_ecc_points.c
       ltc_ecc_projective_add_point.c
       ltc_ecc_projective_dbl_point.c
       ltc_ecc_verify_key.c
    )

set(CMAKE_C_FLAGS          "${CMAKE_C_FLAGS} ${CFLAGS}")
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} ${LDFLAGS}")

add_library(${PROJECT_NAME} ${SOURCE_FILES})

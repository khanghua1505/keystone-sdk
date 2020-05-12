cmake_minimum_required(VERSION 3.10)

project(hello-eapp C ASM)

include($ENV{KEYSTONE_SDK_DIR}/macros.cmake)

#-------------------------------------------------------------------------------
# BASIC SETUP
#-------------------------------------------------------------------------------

set(KEYSTONE_LIB_DIR    $ENV{KEYSTONE_SDK_DIR}/lib)

set(KEYSTONE_APP_LIB        keystone-eapp)
set(KEYSTONE_APP_INCDIR     ${KEYSTONE_LIB_DIR}/app/include)
set(KEYSTONE_EDGE_LIB       keystone-edge)
set(KEYSTONE_EDGE_INCDIR    ${KEYSTONE_LIB_DIR}/edge/include)

#-------------------------------------------------------------------------------
# Program and flags
#-------------------------------------------------------------------------------

set(CFLAGS      "-Wall -Werror")
set(LDFLAGS     "-static -nostdlib -L${KEYSTONE_LIB_DIR}")

set(CMAKE_C_FLAGS           "${CFLAGS}")
set(CMAKE_EXE_LINKER_FLAGS  "${LDFLAGS}")
    
################################################################################
# BUILD PROJECTS
################################################################################

include_directories(
    ${KEYSTONE_APP_INCDIR}
    ${KEYSTONE_EDGE_INCDIR}
    )

add_executable(${PROJECT_NAME}
    eapp_native.c
    )
    
target_link_libraries(${PROJECT_NAME} 
    ${KEYSTONE_APP_LIB}
    ${KEYSTONE_EDGE_LIB}
    )
    





    







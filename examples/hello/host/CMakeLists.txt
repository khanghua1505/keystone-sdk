cmake_minimum_required(VERSION 3.10)

project(hello-host CXX)

#-------------------------------------------------------------------------------
# BASIC SETUP
#-------------------------------------------------------------------------------

set(KEYSTONE_LIB_DIR    $ENV{KEYSTONE_SDK_DIR}/lib)

set(KEYSTONE_EDGE_LIB       keystone-edge)
set(KEYSTONE_EDGE_INCDIR    ${KEYSTONE_LIB_DIR}/edge/include)
set(KEYSTONE_HOST_LIB       keystone-host)
set(KEYSTONE_HOST_INCDIR    ${KEYSTONE_LIB_DIR}/host/include)

#-------------------------------------------------------------------------------
# Program and flags
#-------------------------------------------------------------------------------

set(CXXFLAGS    -Wall -Werror)
set(LDFLAGS     "-L${KEYSTONE_LIB_DIR}")

set(CMAKE_CXX_FLAGS         "${CMAKE_CXX_FLAGS} ${CFLAGS}")
set(CMAKE_EXE_LINKER_FLAGS  "${CMAKE_EXE_LINKER_FLAGS} ${LDFLAGS}")
    
################################################################################
# BUILD PROJECTS
################################################################################

include_directories(
    ${KEYSTONE_EDGE_INCDIR}
    ${KEYSTONE_HOST_INCDIR})

add_executable(${PROJECT_NAME}
    host.cpp
    )
    
target_link_libraries(${PROJECT_NAME} 
    ${KEYSTONE_HOST_LIB}
    ${KEYSTONE_EDGE_LIB}
    )
    





    







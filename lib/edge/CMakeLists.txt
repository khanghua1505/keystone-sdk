project(keystone-edge C ASM)

set(CFLAGS      "-Wall -Werror")
set(LDFLAGS     "-static")
set(DEFINES     "-DIO_SYSCALL_WRAPPING")

set(SOURCE_FILES 
        edge_call.c
        edge_dispatch.c
        edge_syscall.c
    )
    
set(CMAKE_C_FLAGS          "${CMAKE_C_FLAGS} ${CFLAGS}")
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} ${LDFLAGS}")

add_definitions(${DEFINES})

add_library(${PROJECT_NAME} ${SOURCE_FILES})
target_include_directories(${PROJECT_NAME} PUBLIC ${lib_inc_dir})

install(TARGETS ${PROJECT_NAME} DESTINATION ${out_dir})


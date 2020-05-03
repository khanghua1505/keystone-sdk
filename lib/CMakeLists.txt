include(${src_dir}/macros.cmake)

set(libmodules              app edge host verifier crypto)
set(enabled_libmodules      app edge host verifier crypto)

foreach(module ${enabled_libmodules})
    add_subdirectory(${module})
endforeach()

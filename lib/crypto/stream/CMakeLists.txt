set(libmodules              chacha rabbit rc4 salsa20 sober128 sosemanuk)
set(enabled_libmodules      chacha rabbit rc4 salsa20 sober128 sosemanuk)

foreach(module ${enabled_libmodules})
    add_subdirectory(${module})
endforeach()

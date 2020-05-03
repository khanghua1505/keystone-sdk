set(libmodules              
        asn1 
        dh 
        dsa 
        ec25519 
        ecc 
        ed15519 
        pkcs1 
        rsa 
        x25519
    )
    
set(enabled_libmodules      rsa dh ed25519)

foreach(module ${enabled_libmodules})
    add_subdirectory(${module})
endforeach()

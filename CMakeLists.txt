cmake_minimum_required(VERSION 3.13)

project(GeodeMod)

# Trik Makro: Menghubungkan modul CMake langsung dari folder unduhan Geode SDK di GitHub
if(DEFINED ENV{GEODE_SDK})
    list(APPEND CMAKE_MODULE_PATH "$ENV{GEODE_SDK}/cmake")
    set(Geode_DIR "$ENV{GEODE_SDK}/cmake")
endif()

# Memuat paket utama Geode secara aman
find_package(Geode REQUIRED)

# Membuat file berekstensi .geode dari kode sumber Anda
add_geode_mod(
    ${PROJECT_NAME}
    SOURCES
        src/main.cpp
)

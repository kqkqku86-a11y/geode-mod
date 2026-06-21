cmake_minimum_required(VERSION 3.13)

# Membantu CMake menemukan lokasi internal Geode SDK di GitHub Actions
include($ENV{GEODE_SDK}/cmake/GeodeWeaponry.cmake)

project(GeodeMod)

# Menemukan paket Geode yang sudah terinstal otomatis di server
find_package(Geode REQUIRED)

# Membuat file .geode berdasarkan source code Anda
add_geode_mod(
    ${PROJECT_NAME}
    SOURCES
        src/main.cpp
)

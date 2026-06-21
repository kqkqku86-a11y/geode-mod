cmake_minimum_required(VERSION 3.13)

project(GeodeMod)

# Memuat paket Geode secara otomatis menggunakan modul bawaan server
find_package(Geode REQUIRED)

# Membuat file .geode berdasarkan source code Anda
add_geode_mod(
    ${PROJECT_NAME}
    SOURCES
        src/main.cpp
)

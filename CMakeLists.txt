cmake_minimum_required(VERSION 3.13)

# Memaksa CMake mengenali jalur internal folder modul Geode SDK di GitHub
list(APPEND CMAKE_MODULE_PATH "$ENV{GEODE_SDK}/cmake")
set(Geode_DIR "$ENV{GEODE_SDK}/cmake")

project(GeodeMod)

# Sekarang CMake dijamin bisa memuat pustaka Geode
find_package(Geode REQUIRED)

# Membuat file .geode berdasarkan source code Anda
add_geode_mod(
    ${PROJECT_NAME}
    SOURCES
        src/main.cpp
)

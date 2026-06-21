cmake_minimum_required(VERSION 3.13)

# Membuat proyek Geode baru
project(GeodeMod)

# Mengintegrasikan sistem Geode ke dalam CMake
find_package(Geode REQUIRED)

# Menentukan file source code yang akan dikompilasi
add_geode_mod(
    ${PROJECT_NAME}
    SOURCES
        src/main.cpp
)

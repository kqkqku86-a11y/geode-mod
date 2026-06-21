cmake_minimum_required(VERSION 3.13)
project(GeodeMod)

# Memaksa CMake langsung menembak ke folder modul bawaan server
list(APPEND CMAKE_MODULE_PATH "$ENV{GEODE_SDK}/share/Geode/cmake")

find_package(Geode REQUIRED)
add_geode_mod(${PROJECT_NAME} SOURCES src/main.cpp)


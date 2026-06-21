cmake_minimum_required(VERSION 3.13)

# Mengaktifkan ekstensi pencarian internal Geode CLI di server
# Menghubungkan utilitas build bawaan Geode SDK

project(GeodeMod)

# Memuat paket Geode (Jalur dijamin aman karena baris include di atas)
find_package(Geode REQUIRED)

# Membuat biner .geode
add_geode_mod(
    ${PROJECT_NAME}
    SOURCES
        src/main.cpp
)

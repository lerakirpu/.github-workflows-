cmake_minimum_required(VERSION 3.10)
project(HelloWorld VERSION 0.1.0)

# Получаем версию из внешней переменной
if(DEFINED VERSION_PROJECT)
    message(STATUS "Using version from CI: ${VERSION_PROJECT}")
    add_definitions(-DVERSION_PROJECT="${VERSION_PROJECT}")
else()
    # Локальная разработка - используем версию из CMake
    add_definitions(-DVERSION_PROJECT="${PROJECT_VERSION}")
endif()

add_executable(hello_world main.cpp)

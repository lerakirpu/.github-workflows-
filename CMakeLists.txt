cmake_minimum_required(VERSION 3.10.0)

if(DEFINED ENV{GITHUB_RUN_NUMBER})
    project(LAB1 VERSION 0.0.$ENV{GITHUB_RUN_NUMBER} LANGUAGES C CXX)
else()
    project(LAB1 VERSION 0.0.0 LANGUAGES C CXX)
endif()

# Всегда используем версию из CMake
add_definitions(-DVERSION_PROJECT="${PROJECT_VERSION}")

add_executable(LAB1 main.cpp)

set(CPACK_PACKAGE_NAME "LAB1")
set(CPACK_PACKAGE_VERSION ${PROJECT_VERSION})

if(UNIX AND NOT APPLE)
    set(CPACK_GENERATOR "DEB")
    set(CPACK_DEBIAN_PACKAGE_MAINTAINER "Lera Kirpu <lerakirpu@mail.ru>")
endif()

if(WIN32)
    set(CPACK_GENERATOR "ZIP")
endif()

install(TARGETS LAB1 DESTINATION bin)
include(CPack)

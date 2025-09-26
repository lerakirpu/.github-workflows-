cmake_minimum_required(VERSION 3.10.0)
project(PYTHON VERSION 0.1.0 LANGUAGES C CXX)

if(DEFINED VERSION_PROJECT)
    add_definitions(-DVERSION_PROJECT="${VERSION_PROJECT}")
else()
    add_definitions(-DVERSION_PROJECT="0")
endif()

add_executable(PYTHON main.cpp)

set(CPACK_PACKAGE_NAME "PYTHON")
set(CPACK_PACKAGE_VERSION ${PROJECT_VERSION})

if(WIN32)
set(CPACK_GENERATOR "ZIP")
endif()

if(UNIX AND NOT APPLE)
set(CPACK_GENERATOR "DEB")
endif()

install(TARGETS PYTHON DESTINATION bin)
include(CPack)

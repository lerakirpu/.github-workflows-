cmake_minimum_required(VERSION 3.10.0)
project(LAB1 VERSION 1.0.0 LANGUAGES C CXX) 

if(DEFINED VERSION_PROJECT)
    add_definitions(-DVERSION_PROJECT="${VERSION_PROJECT}")
else()
    add_definitions(-DVERSION_PROJECT="${PROJECT_VERSION}") 
endif()

add_executable(LAB1 main.cpp)

set(CPACK_PACKAGE_NAME "LAB1")
set(CPACK_PACKAGE_VERSION ${PROJECT_VERSION})

if(WIN32)
    set(CPACK_GENERATOR "ZIP")
endif()

if(UNIX AND NOT APPLE)
    set(CPACK_GENERATOR "DEB")
endif()

install(TARGETS LAB1 DESTINATION bin)
include(CPack)

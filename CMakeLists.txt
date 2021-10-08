cmake_minimum_required(VERSION 3.16.3)

project(ColorSpace)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB SOURCES
    src/*.cpp
)

file(GLOB HEADERS
    src/*.h
)

add_library(ColorSpace STATIC ${SOURCES} ${HEADERS})

target_include_directories(ColorSpace PUBLIC
    src
)




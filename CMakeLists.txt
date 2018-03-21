cmake_minimum_required(VERSION 2.8)

PROJECT(ConeRendering)

find_package(VTK 8.0.0 REQUIRED)

include(${VTK_USE_FILE})

file(GLOB SOURCES src/ConeRendering.cpp)

add_executable(ConeRendering MACOSX_BUNDLE src/ConeRendering.cpp)

target_link_libraries(ConeRendering ${VTK_LIBRARIES})
cmake_minimum_required(VERSION 2.8)

PROJECT(ConeRendering)

SET(VTK_DIR C:/VTK/build)

find_package(VTK REQUIRED)
include(${VTK_USE_FILE})

add_executable(ConeRendering MACOSX_BUNDLE src/ConeRendering.cpp)

target_link_libraries(ConeRendering ${VTK_LIBRARIES})
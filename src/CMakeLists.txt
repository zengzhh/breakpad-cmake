cmake_minimum_required (VERSION 3.15)

project(breakpad-cmake)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

if(WIN32)
    set(BUILD_OS "windows")
    add_definitions(-DUNICODE -D_UNICODE)
endif()

# C/C++-常规-附加包含目录
include_directories(${CMAKE_CURRENT_SOURCE_DIR})

# C/C++-常规-警告等级
add_compile_options(/W4 /WX)

add_subdirectory(common)
add_subdirectory(client)
add_subdirectory(example)
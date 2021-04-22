cmake_minimum_required(VERSION 3.10)
project(project)

set(CMAKE_CXX_STANDARD 14)

set_source_files_properties(main.cpp
        PROPERTIES COMPILE_FLAGS "-include ../../include/common.h")

add_executable(project main.cpp)

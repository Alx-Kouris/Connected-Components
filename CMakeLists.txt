cmake_minimum_required(VERSION 3.9)
project(cc_git)

set(CMAKE_CXX_STANDARD 11)

include_directories(libraries)

add_executable(cc_git
        libraries/graph.h
        libraries/graph_dyn.h
        libraries/reading.h
        libraries/shiloach.h
        libraries/shiloach_dynamic.h
        libraries/utilities.h
        main/graph.cpp
        main/graph_dyn.cpp
        main/main.cpp
        main/makefile
        main/reading.cpp
        main/shiloach_dynamic.cpp
        main/shiloach.cpp
        makefile)

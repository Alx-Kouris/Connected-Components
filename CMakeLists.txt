cmake_minimum_required(VERSION 3.9)
project(cc_git)

set(CMAKE_CXX_STANDARD 11)

include_directories(include)

add_executable(cc_git
        include/graph.h
        include/graph_dyn.h
        include/reading.h
        include/shiloach.h
        include/shiloach_dynamic.h
        include/utilities.h
        src/graph.cpp
        src/graph_dyn.cpp
        src/main.cpp
        src/reading.cpp
        src/shiloach_dynamic.cpp
        src/shiloach.cpp
        Makefile)

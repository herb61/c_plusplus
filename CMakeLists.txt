cmake_minimum_required(VERSION 3.12)
project(streams_strukt)

set(CMAKE_CXX_STANDARD 14)

add_executable(streams_strukt warenliste/01_struct_stream.cpp point_vs_ref/01-point_referenz.cpp namespace/01-namespace.cpp statisch_vs_dynamisch/statvsdyn.cpp)
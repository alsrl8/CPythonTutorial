cmake_minimum_required(VERSION 3.26)
project(c)

set(CMAKE_CXX_STANDARD 17)

find_package(PythonLibs REQUIRED)
include_directories(D:/02_Development_Tools/Python11/include)
add_executable(c main.c)

cmake_minimum_required(VERSION 3.9)
project(lin)

set(CMAKE_CXX_STANDARD 11)

add_executable(lin main.cpp linalg.cpp linalg.h)
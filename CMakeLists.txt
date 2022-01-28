cmake_minimum_required(VERSION 3.16)
project(algorithm_tasks)

set(CMAKE_CXX_STANDARD 17)

set(src main.cpp utils/print_containers.h codewars/perimeter_squares_rectangle.h)

add_executable(${PROJECT_NAME} ${src})
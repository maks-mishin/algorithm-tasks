cmake_minimum_required(VERSION 3.16)
project(algorithm_tasks)

set(CMAKE_CXX_STANDARD 17)

set(src main.cpp codewars/sort_and_star.h leetcode/binary_search.h leetcode/first_bad_version.h)

add_executable(${PROJECT_NAME} ${src})
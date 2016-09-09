cmake_minimum_required(VERSION 3.6)

project(core CXX)

set(core_SRCS core.cpp core.h)

add_library(core ${core_SRCS})
target_link_libraries(core)
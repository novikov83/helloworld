cmake_minimum_required(VERSION 3.8)

project(HelloWorldLib VERSION 0.0.7)

add_library(helloworld_lib SHARED helloworld_lib.cpp helloworld_lib.h)

configure_file(config.h.in ${CMAKE_CURRENT_BINARY_DIR}/config.h)
target_include_directories(helloworld_lib PRIVATE ${CMAKE_CURRENT_BINARY_DIR})

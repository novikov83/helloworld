cmake_minimum_required(VERSION 3.8)

project(HelloWorld VERSION 0.0.7)

add_executable(helloworld_cli helloworld_cli.cpp)

configure_file(config.h.in ${CMAKE_CURRENT_BINARY_DIR}/config.h)
target_include_directories(helloworld_cli PRIVATE ${CMAKE_CURRENT_BINARY_DIR})

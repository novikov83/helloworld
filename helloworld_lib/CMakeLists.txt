cmake_minimum_required(VERSION 3.8)

project(HelloWorldLib VERSION 0.0.7)

add_library(helloworld_lib SHARED helloworld_lib.cpp helloworld_lib.h)

set_target_properties(helloworld_lib PROPERTIES
					CXX_STANDARD 14
					CXX_STANDARD_REQUIRED ON
)

#target_compile_options(helloworld_lib PUBLIC -Wall -Wextra -pedantic -Werror)

configure_file(config.h.in ${CMAKE_CURRENT_BINARY_DIR}/config.h)
target_include_directories(helloworld_lib PRIVATE ${CMAKE_CURRENT_BINARY_DIR})

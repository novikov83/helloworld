cmake_minimum_required(VERSION 3.8)

project(VersionLib VERSION 0.0.${PATCH_VERSION})

add_library(version SHARED version.cpp version.h)

set_target_properties(version PROPERTIES
					CXX_STANDARD 14
					CXX_STANDARD_REQUIRED ON
)

#target_compile_options(helloworld_lib PUBLIC -Wall -Wextra -pedantic -Werror)

configure_file(config.h.in ${CMAKE_CURRENT_BINARY_DIR}/config.h)
target_include_directories(version PRIVATE ${CMAKE_CURRENT_BINARY_DIR})

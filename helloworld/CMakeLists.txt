cmake_minimum_required(VERSION 3.8)

project(HelloWorld VERSION 0.0.${PATCH_VERSION})

add_executable(helloworld helloworld.cpp)

set_target_properties(helloworld PROPERTIES
					CXX_STANDARD 14
					CXX_STANDARD_REQUIRED ON
)

target_compile_options(helloworld PUBLIC -Wall -Wextra -pedantic -Werror)

target_include_directories(helloworld PRIVATE ${ROOT_SRC_DIR}/lib)
target_link_libraries(helloworld version)

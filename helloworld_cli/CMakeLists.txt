cmake_minimum_required(VERSION 3.8)

project(HelloWorldCli VERSION 0.0.7)

add_executable(helloworld_cli helloworld_cli.cpp)

set_target_properties(helloworld_cli PROPERTIES
					CXX_STANDARD 14
					CXX_STANDARD_REQUIRED ON
)

target_compile_options(helloworld_cli PUBLIC -Wall -Wextra -pedantic -Werror)

target_include_directories(helloworld_cli PRIVATE ${ROOT_SRC_DIR}/helloworld_lib)
target_link_libraries(helloworld_cli helloworld_lib)

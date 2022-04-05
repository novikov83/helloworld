cmake_minimum_required(VERSION 3.8)

project(HelloWorld VERSION 0.0.7)

add_subdirectory(helloworld_lib)
add_subdirectory(tests)

add_executable(helloworld_cli helloworld_cli.cpp)
target_include_directories(helloworld_cli PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/helloworld_lib)
target_link_libraries(helloworld_cli helloworld_lib)

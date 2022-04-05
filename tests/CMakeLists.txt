cmake_minimum_required(VERSION 3.8)

project(HelloWorldTests VERSION 0.0.7)

option(WITH_BOOST_TEST "Boost tests" ON)

if (WITH_BOOST_TEST)
	find_package(Boost COMPONENTS unit_test_framework REQUIRED)

	add_executable(test_helloworld_lib test_helloworld_lib.cpp)
	set_target_properties(test_helloworld_lib PROPERTIES 
		COMPILE_DEFINITIONS BOOST_TEST_DYN_LINK 
		INCLUDE_DIRECTORIES ${Boost_INCLUDE_DIR}
	)
	target_include_directories(test_helloworld_lib PRIVATE ../helloworld_lib)
	target_link_libraries(test_helloworld_lib helloworld_lib ${Boost_LIBRARIES})
endif()
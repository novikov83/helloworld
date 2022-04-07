cmake_minimum_required(VERSION 3.8)

project(HelloWorldTests VERSION 0.0.${PATCH_VERSION})

if (WITH_BOOST_TEST)
	find_package(Boost COMPONENTS unit_test_framework REQUIRED)

	add_executable(test_lib test_lib.cpp)
	set_target_properties(test_lib PROPERTIES 
		COMPILE_DEFINITIONS BOOST_TEST_DYN_LINK 
		INCLUDE_DIRECTORIES ${Boost_INCLUDE_DIR}
	)
	target_include_directories(test_lib PRIVATE ../lib)
	target_link_libraries(test_lib version ${Boost_LIBRARIES})
endif()
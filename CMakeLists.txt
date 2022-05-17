cmake_minimum_required(VERSION 3.8)

#set(PATCH_VERSION 3)
set(PATCH_VERSION "1" CACHE INTERNAL "Patch version")
project(helloworld VERSION 0.0.${PATCH_VERSION})

set(ROOT_SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR})

option(WITH_BOOST_TEST "Boost tests" ON)

add_subdirectory(helloworld)
add_subdirectory(lib)
add_subdirectory(tests)


install(TARGETS helloworld RUNTIME DESTINATION bin)
install(TARGETS version RUNTIME DESTINATION lib)

# Создание пакета deb
# cmake --build . --target package
set(CPACK_GENERATOR DEB)
set(CPACK_PACKAGE_VERSION_MAJOR "${PROJECT_VERSION_MAJOR}")
set(CPACK_PACKAGE_VERSION_MINOR "${PROJECT_VERSION_MINOR}")
set(CPACK_PACKAGE_VERSION_PATCH "${PROJECT_VERSION_PATCH}")
set(CPACK_PACKAGE_CONTACT darek@bk.ru)
include(CPack)

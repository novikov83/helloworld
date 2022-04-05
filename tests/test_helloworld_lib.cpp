#define BOOST_TEST_MODULE test_helloworld_lib

#include "helloworld_lib.h"
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(test_helloworld_lib)

BOOST_AUTO_TEST_CASE(test_helloworld_lib_version) {
	BOOST_CHECK(GetVersion() > 0);
}

BOOST_AUTO_TEST_SUITE_END()

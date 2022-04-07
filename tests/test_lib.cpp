#define BOOST_TEST_MODULE test_helloworld_lib

#include "version.h"
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(test_lib)

BOOST_AUTO_TEST_CASE(test_version) {
	BOOST_CHECK(GetVersion() > 0);
}

BOOST_AUTO_TEST_SUITE_END()

#ifndef boost_test
#define boost_test

#define BOOST_TEST_MODULE MainTest
#include <boost/test/included/unit_test.hpp>

#endif // boost_test
#include "../../src/algorithms/dynamic_programming/fibonacci.hpp"



BOOST_AUTO_TEST_CASE( fib_test )
{
    BOOST_REQUIRE( fibonacci(3) == 2 );      
}


#ifndef boost_test
#define boost_test

#include <boost/test/unit_test.hpp>

#endif // boost_test

#include "../../src/data_structures/binarytree/binarytree.hpp"

BOOST_AUTO_TEST_CASE( binary_tree )
{

    BinaryTree a(3);
    BOOST_REQUIRE( a.min() == 3 );      // #2 throws on error

    a.insert(1);
    BOOST_REQUIRE( a.min() == 1 );      // #2 throws on error
    a.insert(2);
    BOOST_REQUIRE( a.min() == 1 );      // #2 throws on error
    a.insert(5);
    a.insert(7);
    a.insert(11);
    // printf("start remove 1 ---\n");
    a.remove(1);
    // printf("\n end remove 1 --- \n");
    // printf("start remove 2 ---\n");
    a.remove(2);
    // printf("\n end remove 2 --- \n");
    // printf("start remove 3 ---\n");
    a.remove(3);
    // printf("\n end remove 3 --- \n");
    BOOST_REQUIRE( a.min() == 5 );      // #2 throws on error


}
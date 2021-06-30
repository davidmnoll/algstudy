cmake_minimum_required( VERSION 3.16 )

project( alg_study )

# flags

add_subdirectory(src)
add_subdirectory(test)
# ./test/test_main.cpp ./test/test_binary_tree.cpp ./src/binarytree/binarytree.cpp ./src/hashtable/hashtable.cpp ./src/stack/stack.cpp

# target
add_executable( algStudy main )
add_executable( test testMain )


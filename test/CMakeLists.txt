
set(test_source_files 
    test_main.cpp
    test_binary_tree.cpp
)

add_executable( testAlgs ${test_source_files} )

target_link_libraries(testAlgs binarytree)
target_link_libraries(testAlgs hashtable)
target_link_libraries(testAlgs stack)
target_link_libraries(testAlgs linkedlist)

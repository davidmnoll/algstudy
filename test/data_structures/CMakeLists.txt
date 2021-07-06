
set(data_structure_test_files 
    test_binary_tree.cpp
)

add_library(data_structure_tests ${data_structure_test_files})


target_link_libraries(data_structure_tests data_structures)

set(algorithm_test_files 
    test_dynamic_programming.cpp
)

add_library(algorithm_tests ${algorithm_test_files})


target_link_libraries(algorithm_tests dynamic_programming)

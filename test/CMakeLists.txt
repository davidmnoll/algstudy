add_subdirectory(data_structures)
add_subdirectory(algorithms)


set(test_source_files 
    test_main.cpp
)

add_executable( testAlgs ${test_source_files} )

target_link_libraries(testAlgs algorithm_tests)
target_link_libraries(testAlgs data_structure_tests)

add_subdirectory(dynamic_programming)

# file(WRITE ${CMAKE_CURRENT_BINARY_DIR}/null.cpp "")

# add_library(algorithms ${CMAKE_CURRENT_BINARY_DIR}/null.cpp)


set(main_algorithms_source_files 
    main_algorithms.cpp
)

add_library(algorithms ${main_algorithms_source_files})

target_link_libraries(algorithms dynamic_programming)

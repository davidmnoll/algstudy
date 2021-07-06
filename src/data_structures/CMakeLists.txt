add_subdirectory(binarytree)
add_subdirectory(hashtable)
add_subdirectory(linkedlist)
add_subdirectory(stack)

set(main_datastructures_source_files 
    main_datastructures.cpp
)

add_library(data_structures ${main_datastructures_source_files})

# file(WRITE ${CMAKE_CURRENT_BINARY_DIR}/null.cpp "")

# add_library(data_structures ${CMAKE_CURRENT_BINARY_DIR}/null.cpp)

target_link_libraries(data_structures binarytree)
target_link_libraries(data_structures hashtable)
target_link_libraries(data_structures stack)
target_link_libraries(data_structures linkedlist)

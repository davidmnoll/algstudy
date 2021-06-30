
add_subdirectory(binarytree)
add_subdirectory(hashtable)
add_subdirectory(linkedlist)
add_subdirectory(stack)

set(stack_source_files 
    stack.cpp
)

add_library(stack ${stack_source_files})


set(main_source_files 
    main.cpp
)

add_executable( algStudyMain ${main_source_files} )
target_link_libraries(algStudyMain binarytree)
target_link_libraries(algStudyMain hashtable)
target_link_libraries(algStudyMain stack)
target_link_libraries(algStudyMain linkedlist)

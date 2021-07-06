
add_subdirectory(data_structures)
add_subdirectory(algorithms)


set(main_source_files 
    main.cpp
)

add_executable( algStudyMain ${main_source_files} )


target_link_libraries(algStudyMain data_structures)
target_link_libraries(algStudyMain algorithms)


add_subdirectory(dynamic_programming)

file(WRITE ${CMAKE_CURRENT_BINARY_DIR}/null.cpp "")

add_library(algorithms ${CMAKE_CURRENT_BINARY_DIR}/null.cpp)

target_link_libraries(algorithms dynamic_programming)

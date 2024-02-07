cmake_minimum_required(VERSION 3.0)
project(reverse_message)

aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR} SRC)
add_executable( reverse_message ${SRC})
target_include_directories(reverse_message PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
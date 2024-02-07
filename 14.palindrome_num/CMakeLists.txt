cmake_minimum_required(VERSION 3.0)
project(palindrome_num)

aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR} SRC)
add_executable( palindrome_num ${SRC})
target_include_directories(palindrome_num PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

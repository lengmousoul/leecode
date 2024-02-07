cmake_minimum_required(VERSION 3.0)
project(reverse_string)

aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR} SRC)
add_executable(reverse_string ${SRC})
target_include_directories(reverse_string PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
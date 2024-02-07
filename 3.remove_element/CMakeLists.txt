cmake_minimum_required(VERSION 3.0)
project(remove_element)

aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR} SRC)

add_executable(remove_element ${SRC})
target_include_directories(remove_element PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

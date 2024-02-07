cmake_minimum_required(VERSION 3.0)
project(length_last_word)

aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR} SRC)

add_executable( length_last_word ${SRC})
target_include_directories(length_last_word PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

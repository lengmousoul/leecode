cmake_minimum_required(VERSION 3.0)
project(remove_duplicates)

aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR} SRC)
add_executable(remove_duplicates ${SRC})

target_include_directories(remove_duplicates PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
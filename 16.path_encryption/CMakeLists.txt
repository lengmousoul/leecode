cmake_minimum_required(VERSION 3.0)
project(path_encryption)

aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR} SRC)

add_executable( path_encryption ${SRC})
target_link_directories(path_encryption PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
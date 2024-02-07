cmake_minimum_required(VERSION 3.0)
project(min_sub_length)
aux_source_directory( ${CMAKE_CURRENT_SOURCE_DIR}  SRC)

add_executable(MIN  ${SRC})
target_include_directories(MIN PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

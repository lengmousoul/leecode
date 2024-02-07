cmake_minimum_required(VERSION 3.0)

project(two_search)

aux_source_directory( ${CMAKE_CURRENT_SOURCE_DIR} SRC)


add_executable(two  ${SRC})
target_include_directories(two PUBLIC  "${CMAKE_CURRENT_SOURCE_DIR}")
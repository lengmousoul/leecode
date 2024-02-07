cmake_minimum_required(VERSION 3.0)
project(dynamic_pass)

aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR} SRC)
add_executable(dynamic_pass ${SRC})

target_include_directories(dynamic_pass PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
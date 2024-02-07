cmake_minimum_required(VERSION 3.0)
project(square_big)

aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR} SRC)

add_executable(square_big ${SRC})
target_include_directories(square_big PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
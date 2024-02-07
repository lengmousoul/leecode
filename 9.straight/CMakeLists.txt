cmake_minimum_required(VERSION 3.0)
project(straight)

aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR} SRC)

add_executable(straight ${SRC})
target_include_directories( straight PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
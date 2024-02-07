cmake_minimum_required(VERSION 3.0)
project(drink)
aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR} SRC)

add_executable(drink ${SRC})
target_include_directories(drink PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
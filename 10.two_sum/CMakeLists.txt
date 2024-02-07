cmake_minimum_required(VERSION 3.0)
project(two_sum)
aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR} SRC)

add_executable(two_sum ${SRC})
target_include_directories(two_sum PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

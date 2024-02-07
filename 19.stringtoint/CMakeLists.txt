cmake_minimum_required(VERSION 3.0)
project( stringtoint)

aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR} SRC)

add_executable(stringtoint ${SRC})
target_include_directories(stringtoint PUBLIC ${CMAKE_CURRENT_SOURCE_DIR} )
cmake_minimum_required(VERSION 3.0)
project(convert_notvaild)
aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR} SRC)

add_executable( convert_notvaild ${SRC})
target_include_directories(convert_notvaild PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

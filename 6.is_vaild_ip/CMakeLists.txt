cmake_minimum_required(VERSION 3.0)
project(is_vaild_ip)

aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR} SRC)

add_executable( is_vaild_ip ${SRC})

target_include_directories(is_vaild_ip PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

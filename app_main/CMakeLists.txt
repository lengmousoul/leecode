cmake_minimum_required(VERSION 3.12)


set(CMAKE_BUILD_TYPE DEBUG)



add_executable(output main.c)

target_link_libraries(output queue)
target_link_libraries(output min_sub_array)
cmake_minimum_required(VERSION 3.12)
#add_library 用于生成库文件
add_library(queue 
queue.c
) 

add_library( min_sub_array  
min_sub_array.c
) 
# target_include_directories 用于向目标（exe 或者库文件）添加包含目录
target_include_directories(queue  PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")
target_include_directories(min_sub_array  PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")

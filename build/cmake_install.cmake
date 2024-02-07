# Install script for directory: D:/Desktop/leecode

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Program Files (x86)/output")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("D:/Desktop/leecode/build/app/cmake_install.cmake")
  include("D:/Desktop/leecode/build/app_main/cmake_install.cmake")
  include("D:/Desktop/leecode/build/1.two_search/cmake_install.cmake")
  include("D:/Desktop/leecode/build/2.min_sub_length/cmake_install.cmake")
  include("D:/Desktop/leecode/build/3.remove_element/cmake_install.cmake")
  include("D:/Desktop/leecode/build/4.square_big/cmake_install.cmake")
  include("D:/Desktop/leecode/build/5.remove_list_element/cmake_install.cmake")
  include("D:/Desktop/leecode/build/6.is_vaild_ip/cmake_install.cmake")
  include("D:/Desktop/leecode/build/7.convert_notvaild/cmake_install.cmake")
  include("D:/Desktop/leecode/build/8.drink/cmake_install.cmake")
  include("D:/Desktop/leecode/build/9.straight/cmake_install.cmake")
  include("D:/Desktop/leecode/build/10.two_sum/cmake_install.cmake")
  include("D:/Desktop/leecode/build/11.reverse_string/cmake_install.cmake")
  include("D:/Desktop/leecode/build/12.reverse_word_in_string/cmake_install.cmake")
  include("D:/Desktop/leecode/build/13.is_palindrome/cmake_install.cmake")
  include("D:/Desktop/leecode/build/14.palindrome_num/cmake_install.cmake")
  include("D:/Desktop/leecode/build/15.length_last_word/cmake_install.cmake")
  include("D:/Desktop/leecode/build/16.path_encryption/cmake_install.cmake")
  include("D:/Desktop/leecode/build/17.dynamic_pass/cmake_install.cmake")
  include("D:/Desktop/leecode/build/18.remove_duplicates/cmake_install.cmake")
  include("D:/Desktop/leecode/build/19.stringtoint/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "D:/Desktop/leecode/build/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")

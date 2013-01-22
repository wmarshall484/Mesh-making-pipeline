cmake_minimum_required(VERSION 2.8 FATAL_ERROR)

project(outlier_removal)

find_package(PCL 1.2 REQUIRED)

include_directories(${PCL_INCLUDE_DIRS})
link_directories(${PCL_LIBRARY_DIRS})
add_definitions(${PCL_DEFINITIONS})

add_executable (outlier_removal outlier_removal.cpp)
target_link_libraries (outlier_removal ${PCL_LIBRARIES})
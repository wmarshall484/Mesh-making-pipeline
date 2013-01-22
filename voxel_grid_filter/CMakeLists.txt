cmake_minimum_required(VERSION 2.8 FATAL_ERROR)

project(voxel_grid)

find_package(PCL 1.2 REQUIRED)

include_directories(${PCL_INCLUDE_DIRS})
link_directories(${PCL_LIBRARY_DIRS})
add_definitions(${PCL_DEFINITIONS})

add_executable (vox_filter vox_filter.cpp)
target_link_libraries (vox_filter ${PCL_LIBRARIES})
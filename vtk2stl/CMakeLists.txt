cmake_minimum_required(VERSION 2.8 FATAL_ERROR)

project(greedy_projection)

find_package(PCL 1.2 REQUIRED)

include_directories(${PCL_INCLUDE_DIRS})
link_directories(${PCL_LIBRARY_DIRS})
add_definitions(${PCL_DEFINITIONS})

add_executable (vtk2stl vtk2stl.cpp)
target_link_libraries (vtk2stl ${PCL_LIBRARIES})

#include <iostream>
#include <fstream>
#include <sensor_msgs/PointCloud2.h>
#include <pcl/io/io.h>
#include <pcl/io/pcd_io.h>
#include <pcl/point_types.h>
#include <pcl/io/vtk_lib_io.h>
#include <string>
typedef pcl::PointCloud<pcl::PointXYZ> PointCloud;

int main(int argc, char ** argv){
  if(argc!=3){
    std::cout<<"Useage: vtk2stl [input.vtk [output.stl]]"<<std::endl;
  }
  pcl::PolygonMesh mesh;
  pcl::io::loadPolygonFileVTK(argv[1], mesh);
  pcl::io::savePolygonFileSTL(argv[2], mesh);
  return 0;
}

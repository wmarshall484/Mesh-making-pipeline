If you have a pcd file that you want to make a mesh of, cd to each
directory, cmake, and make each of the projects. Then do the
following, assuming that your pcd file is called watering_can.pcd:

1) cd ~/git/mesh-making-pipeline #(or wherever this readme is).  

2) ./outlier_removal/outlier_removal watering_can.pcd watering_can_inliers.pcd

3) ./mls/mls watering_can_inliers.pcd watering_can_mls.pcd

4) ./voxel_grid_filter/vox_filter watering_can_mls.pcd watering_can_vox.pcd

5) ./greedy/greedy watering_can_vox.pcd watering_can.vtk

6) ./vtk2stl/vtk2stl watering_can.vtk watering_can.stl

Your new mesh is watering_can.stl
# dyros_slam

This project uses Multisense SL for slam. (https://carnegierobotics.com/multisense-slb)

## Install Multisense SL driver & ROS Package
```
sudo apt-get install ros-kinetic-multisense

cd catkin_ws/src
hg clone https://bitbucket.org/crl/multisense_ros multisense
cd ..
catkin_make
```

## Ethercat configuration for Multisense SL
```
cd catkin_ws/src/multisense/multisense_bringup
sudo ./configureNetwork.sh
```

If an error occured, you should revise the script file.(configureNetwork.sh)
change 'eth0' -> 'the MultiSense IP' in your script.

you can check your MultiSense ip.
```
ifconfig
```

## Launch the project
```
cd catkin_ws/src
git clone https://github.com/Junhyung-Kim/dyros_slam.git
cd ..
catkin_make
roslaunch dyros_slam multisense.launch
```

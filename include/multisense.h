#ifndef MULTISENSE_H
#define MULTISENSE_H

#include <ros/ros.h>
#include <sensor_msgs/LaserScan.h>

class multisense 
{
public:
    multisense()
    {
        laser_scan_sub_ = nh.subscribe("/multisense/lidar_scan", 100, &multisense::laserScanCallback, this);
    }
    virtual ~multisense(){}

    void motorInitialize();

private:

    //ROS
    ros::NodeHandle nh;
    ros::Subscriber laser_scan_sub_;
    void laserScanCallback(const sensor_msgs::LaserScanPtr &msg);
};

#endif                                        
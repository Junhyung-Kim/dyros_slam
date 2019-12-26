#include "multisense.h"


void multisense::motorInitialize()
{
    nh.setParam("/multisense/motor_speed", 2.0);
}

//Subscriber & Publisher

void multisense::laserScanCallback(const sensor_msgs::LaserScanPtr &msg)
{
    
}

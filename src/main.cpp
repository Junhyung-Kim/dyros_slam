#include "multisense.cpp"


int main(int argc, char **argv)
{
    ros::init(argc, argv, "dyros_slam_node");

    multisense ms;

    ms.motorInitialize();

    while(ros::ok())
    {

    }

    return 0;
}
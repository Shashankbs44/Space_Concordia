#include "ros/ros.h"
#include "turtlesim/Pose.h"
#include <sstream>

void poseCallback(const turtlesim::Pose& msg)
{
   // turtlesim::Pose pose_message;
   
    printf("x = %f \n",msg.x);
    printf("y = %f \n",msg.y);
    printf("yaw = %f \n",msg.theta);
}

int main(int argc, char **argv)
{
    ros::init(argc, argv, "subsriber_pose");
    ros::NodeHandle n;
    ros::Subscriber sub = n.subscribe("/turtle1/pose", 1000, poseCallback);
    ros::spin();
    return 0;

}
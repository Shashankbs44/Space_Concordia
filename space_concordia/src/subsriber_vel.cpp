
#include "ros/ros.h"
#include "geometry_msgs/Twist.h"
#include <sstream>

void velCallback(const geometry_msgs::Twist& twist)
{
   // turtlesim::Pose pose_message;
   
    printf("x = %f\n",twist.linear.x);
    printf("y = %f\n",twist.linear.y);
    printf("yaw = %f\n",twist.angular.z);
}

int main(int argc, char **argv)
{
    ros::init(argc, argv, "subsriber_vel");
    ros::NodeHandle nh;
    ros::Subscriber sub = nh.subscribe("/turtle1/cmd_vel", 1000, velCallback);
    ros::spin();
    return 0;

}




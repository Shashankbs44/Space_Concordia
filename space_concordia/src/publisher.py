#! /usr/bin/env python 

import rospy
from geometry_msgs.msg import Twist

def command():
    cmd_vel_topic = '/turtle1/cmd_vel'
    pub = rospy.Publisher(cmd_vel_topic, Twist, queue_size=10)
    rospy.init_node('Com', anonymous=False)
    rate = rospy.Rate(5)
    rospy.loginfo("The simulation is starting")
    while not rospy.is_shutdown():
         twist = Twist()
         twist.linear.x = 2
         twist.linear.y = 0
         twist.angular.z = 2
         pub.publish(twist)

if __name__ == '__main__':
    try:
        command()
    except rospy.ROSInterruptException:
        pass

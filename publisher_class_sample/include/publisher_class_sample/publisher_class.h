#ifndef PUBLISHER_CLASS_H
#define PUBLISHER_CLASS_H

#include <ros/ros.h>
#include <std_msgs/String.h>
#include <sstream>

class Publisher
{
public:
  Publisher(ros::NodeHandle &nh);
  ~Publisher();
  bool SetMsg();
  void Publish();
  
private:
  std_msgs::String msg;
  ros::Publisher pub;
};

#endif // PUBLISHER_CLASS_H
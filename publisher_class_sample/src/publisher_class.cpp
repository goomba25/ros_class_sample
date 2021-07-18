#include "publisher_class_sample/publisher_class.h"

Publisher::Publisher(ros::NodeHandle &nh)
{
  ROS_INFO("Publisher Open");
}

Publisher::~Publisher()
{
  ROS_INFO("Publisher Close");
}

bool Publisher::SetMsg()
{  
  static int num = 0;
  std::stringstream ss;
  ss << "Topic" << num;

  msg.data = ss.str();
  num ++;
}

void Publisher::Publish()
{
  SetMsg();
  pub.publish(msg);
}
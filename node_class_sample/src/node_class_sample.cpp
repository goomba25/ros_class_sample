#include "node_class_sample/node_class_sample.h"

NodeClass::NodeClass(ros::NodeHandle &nh)
{
  ROS_INFO("Node Open");
}

NodeClass::~NodeClass()
{
  ROS_INFO("Node Close");
}

void NodeClass::Func()
{
  ROS_INFO("Node Spin");
}
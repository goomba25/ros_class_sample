#ifndef NODE_CLASS_SAMPLE_H
#define NODE_CLASS_SAMPLE_H

#include <ros/ros.h>

class NodeClass
{
public:
  NodeClass(ros::NodeHandle &);
  ~NodeClass();

  void Func();
};

#endif // NODE_CLASS_SAMPLE_H
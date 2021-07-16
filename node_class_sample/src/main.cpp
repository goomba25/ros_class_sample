#include "node_class_sample/node_class_sample.h"

int main(int argc, char **argv)
{
  ros::init(argc, argv, "node_class_sample");
  ros::NodeHandle nh;

  ros::Rate loop_rate(10);

  NodeClass node(nh);

  while(ros::ok()) {
    node.Func();
    ros::spinOnce();
    loop_rate.sleep();
  }

  return 0;
}
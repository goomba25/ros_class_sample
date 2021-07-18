#include "publisher_class_sample/publisher_class.h"

int main(int argc, char **argv)
{
  ros::init(argc, argv, "publisher_class_sample");
  ros::NodeHandle nh;

  ros::Rate loop_rate(10);

  Publisher pub(nh);

  while(ros::ok()) {
    pub.Publish();
    ros::spinOnce();
    loop_rate.sleep();
  }

  return 0;
}
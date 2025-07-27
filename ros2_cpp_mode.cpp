#include "rclcpp/rclcpp.hpp"
int main(int argc,char** argv)
{
    rclcpp::init(argc,argv);// 初始化
    auto node = std::make shared<rclcpp::Node>("cpp node");RCLCPP_INF0(node->get logger(),"你好C++节点!");
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;//test
}
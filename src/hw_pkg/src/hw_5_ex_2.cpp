#include <rclcpp/rclcpp.hpp>
#include "broodje_interfaces/msg/name_number.hpp"

class NameNumberSubscriber : public rclcpp::Node
{
public:
    NameNumberSubscriber() : Node("name_number_subscriber")
    {
        subscription_ = this->create_subscription<broodje_interfaces::msg::NameNumber>(
            "name_number_topic",
            10,
            std::bind(&NameNumberSubscriber::topic_callback, this, std::placeholders::_1)
        );
    }

private:
    void topic_callback(const broodje_interfaces::msg::NameNumber::SharedPtr msg)
    {
        RCLCPP_INFO(this->get_logger(), "Received: name='%s', number=%d", msg->name.c_str(), msg->number);
    }

    rclcpp::Subscription<broodje_interfaces::msg::NameNumber>::SharedPtr subscription_;
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<NameNumberSubscriber>());
    rclcpp::shutdown();
    return 0;
}
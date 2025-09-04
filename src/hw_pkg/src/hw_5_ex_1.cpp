#include <rclcpp/rclcpp.hpp>
#include "broodje_interfaces/msg/name_number.hpp"

class NameNumberPublisher : public rclcpp::Node
{
public:
    NameNumberPublisher() : Node("name_number_publisher")
    {
        publisher_ = this->create_publisher<broodje_interfaces::msg::NameNumber>("name_number_topic", 10);
        timer_ = this->create_wall_timer(
            std::chrono::seconds(3),
            std::bind(&NameNumberPublisher::timer_callback, this));
    }

private:
    void timer_callback()
    {
        auto msg = broodje_interfaces::msg::NameNumber();
        msg.name = "Semih";
        msg.number = 42;
        RCLCPP_INFO(this->get_logger(), "Publishing: name='%s', number=%d", msg.name.c_str(), msg.number);
        publisher_->publish(msg);
    }

    rclcpp::Publisher<broodje_interfaces::msg::NameNumber>::SharedPtr publisher_;
    rclcpp::TimerBase::SharedPtr timer_;
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<NameNumberPublisher>());
    rclcpp::shutdown();
    return 0;
}
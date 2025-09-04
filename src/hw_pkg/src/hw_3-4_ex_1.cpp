#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/int32.hpp>
#include <random>

class RandomPublisherNode : public rclcpp::Node
{
public:
    RandomPublisherNode() : Node("random_publisher_node")
    {
        publisher_ = this->create_publisher<std_msgs::msg::Int32>("random_number", 10);
        timer_ = this->create_wall_timer(
            std::chrono::seconds(3),
            std::bind(&RandomPublisherNode::timer_callback, this));
        rng_.seed(std::random_device{}());
    }

private:
    void timer_callback()
    {
        std_msgs::msg::Int32 msg;
        msg.data = dist_(rng_);
        RCLCPP_INFO(this->get_logger(), "Publishing: %d", msg.data);
        publisher_->publish(msg);
    }

    rclcpp::Publisher<std_msgs::msg::Int32>::SharedPtr publisher_;
    rclcpp::TimerBase::SharedPtr timer_;
    std::mt19937 rng_;
    std::uniform_int_distribution<int> dist_{0, 100};
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<RandomPublisherNode>());
    rclcpp::shutdown();
    return 0;
}
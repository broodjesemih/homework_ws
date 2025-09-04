#include <rclcpp/rclcpp.hpp>

class AlternatingClockNode : public rclcpp::Node
{
public:
    AlternatingClockNode() : Node("alternating_clock_node"), use_system_time_(true)
    {
        timer_ = this->create_wall_timer(
            std::chrono::seconds(5),
            std::bind(&AlternatingClockNode::timer_callback, this));
    }

private:
    void timer_callback()
    {
        if (use_system_time_) {
            auto system_clock = std::make_shared<rclcpp::Clock>(RCL_SYSTEM_TIME);
            auto now = system_clock->now();
            RCLCPP_INFO(this->get_logger(), "Current system time: %.0f.%09ld", 
                    now.seconds(), now.nanoseconds() % 1000000000);
        } else {
            auto steady_clock = std::make_shared<rclcpp::Clock>(RCL_STEADY_TIME);
            auto now = steady_clock->now();
            RCLCPP_INFO(this->get_logger(), "STEADY TIME: %.0f.%09ld", 
                    now.seconds(), now.nanoseconds() % 1000000000);
        }
        use_system_time_ = !use_system_time_;
    }

    rclcpp::TimerBase::SharedPtr timer_;
    bool use_system_time_;
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<AlternatingClockNode>());
    rclcpp::shutdown();
    return 0;
}
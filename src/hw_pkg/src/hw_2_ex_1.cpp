#include <rclcpp/rclcpp.hpp>

class ClockNode : public rclcpp::Node
{
public:
    ClockNode() : Node("clock_node")
    {
        int64_t total_nanoseconds = 20LL * 1000000000LL + 88778567LL;

        auto start = this->get_clock()->now();

        rclcpp::sleep_for(std::chrono::nanoseconds(total_nanoseconds));

        auto end = this->get_clock()->now();

        RCLCPP_INFO(this->get_logger(), "Current system time: %.0f.%09ld",
                    end.seconds(), end.nanoseconds() % 1000000000);

        // Calculate elapsed time in nanoseconds
        int64_t elapsed_ns = end.nanoseconds() - start.nanoseconds();
        RCLCPP_INFO(this->get_logger(), "Elapsed time: %ld seconds and %ld nanoseconds",
                    elapsed_ns / 1000000000, elapsed_ns % 1000000000);
    }
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<ClockNode>();
    rclcpp::shutdown();
    return 0;
}
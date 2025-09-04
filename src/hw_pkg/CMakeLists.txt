cmake_minimum_required(VERSION 3.8)
project(hw_pkg)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic) # -Wall -Wextra -Wpedantic
endif()

find_package(ament_cmake REQUIRED)            # cmake package
find_package(rclcpp REQUIRED)                 # nodig voor alle nodes
find_package(rclcpp_action REQUIRED)          # nodig als er een actionserver node wordt gemaakt 
find_package(std_msgs REQUIRED)               # gebruik maken von standaard messages
find_package(broodje_interfaces REQUIRED)     # nodig om gebruik te maken van custom messages

## 1 new line name of executalbe use the program name !
add_executable(hw_2_ex_1 src/hw_2_ex_1.cpp)      # Huiswerk Lecture 2 Exercise 1: clock node
add_executable(hw_2_ex_2 src/hw_2_ex_2.cpp)      # Huiswerk Lecture 2 Exercise 2: clock v2 node
add_executable(hw_3-4_ex_1 src/hw_3-4_ex_1.cpp)  # Huiswerk Lecture 3-4 Exercise 1: publisher node
add_executable(hw_3-4_ex_2 src/hw_3-4_ex_2.cpp)  # Huiswerk Lecture 3-4 Exercise 2: subscriber node
add_executable(hw_5_ex_1 src/hw_5_ex_1.cpp)      # Huiswerk Lecture 5 Exercise 1: custom publisher node
add_executable(hw_5_ex_2 src/hw_5_ex_2.cpp)      # Huiswerk Lecture 5 Exercise 2: custom subscriber node


## 2 new line meaning that this program needs rclcpp
ament_target_dependencies(hw_2_ex_1 rclcpp)           
ament_target_dependencies(hw_2_ex_2 rclcpp)            
ament_target_dependencies(hw_3-4_ex_1 rclcpp std_msgs) 
ament_target_dependencies(hw_3-4_ex_2 rclcpp std_msgs) 
ament_target_dependencies(hw_5_ex_1 rclcpp std_msgs broodje_interfaces)
ament_target_dependencies(hw_5_ex_2 rclcpp broodje_interfaces)

## new 3 get 
install (TARGETS
      hw_2_ex_1
      hw_2_ex_2
      hw_3-4_ex_1
      hw_3-4_ex_2
      hw_5_ex_1
      hw_5_ex_2

      DESTINATION lib/${PROJECT_NAME}
          )



if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
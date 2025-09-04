# voor mij zelf test dinges, instructies voor anderen

## 1: Create an interface package
cd ~/homework_ws/src/
ros2 pkg create broodje_interfaces
cd broodje_interfaces
rm -r src/ include/
mkdir msg

## 2: Create your custom message
cd ~/homework_ws/src/broodje_interfaces/msg
touch NameNumber.msg

Add these (voorbeeld, mag ook uit boek) lines to NameNumber.msg:
string name
int32 number

## 4. Edit CMakeLists.txt
After find_package(ament_cmake REQUIRED), add:
find_package(rosidl_default_generators REQUIRED)

Before ament_package(), add:
rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/NameNumber.msg"
)
ament_export_dependencies(rosidl_default_runtime)

# 5. Build the interface package
cd ~/homework_ws
colcon build --packages-select broodje_interfaces
source install/setup.bash

Check message:
ros2 interface show broodje_interfaces/msg/NameNumber

# 6. Use the custom message in publisher node
broodje_interfaces must be a dependency in publisher package’s package.xml and CMakeLists.txt.

Example publisher node: zie src/hw_5_ex_1.cpp
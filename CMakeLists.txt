# 设置Cmake的最低版本要求
cmake_minimum_required(VERSION 2.6)
# 创建项目
project(704)
# 添加头文件
# 添加头文件
include_directories(
    /usr/local/include/opencv4
    /usr/local/include
    include
)
find_package(
    OpenCV REQUIRED
)
# 设置变量 
## 设置C++标准
set(CMAKE_CXX_STANDARD_REQUIRED True)   ## 如
set(CMAKE_CXX_STANDARD 11) 
#dubug 模式
set (CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} -g")

# set(SRC_LIST leetcode/704.cpp)
# 可执行程序 result
# add_executable(result CPP_Base/day01/04三目运算符.cpp)
add_executable(result CPP_Base/day01/09常量引用.cpp)
target_link_libraries(result ${OpenCV_LIBS})

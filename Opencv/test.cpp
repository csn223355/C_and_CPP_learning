/**
 *@file test.cpp
 *@author chenshining
 *@version v1.0
 *@date 2023-07-06
 */
#include <iostream>
#include <vector>
#include <opencv2/opencv.hpp>

int main(){
    cv::String src = "/home/csn/Projects/Ubuntu/C++/images/smoke10.jpg";
    cv::Mat image = cv::imread(src);
    cv::Mat image_rgb;
    cv::cvtColor(image,image_rgb,cv::COLOR_BGR2RGB);
    cv::imshow("image",image);
    cv::waitKey(0);
    return 0;

}


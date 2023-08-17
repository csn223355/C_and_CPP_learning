/**
 *@file Myclass.h
 *@author chenshining
 *@version v1.0
 *@date 2023-08-06
 */
#pragma once
#include <iostream>
#include <vector>
#include <string>




/**
 * 一般大的项目习惯性的在头文件中定义类的属性和声明类的方法，类的方法的实现在源文件中定义。
*/

class Myteacher{
private:
    int _age;
    std::string _name;
public:
    void setName(const std::string &name);
    void setAge(const int &age);
    std::string getName() const; 
    int getAge() const;
};


class Point{
public:
    double _x;
    double _y;

public:
    void setPoint(const double &x,const double &y);
    void getPointInfo() const;
    double distance(double x,double y);
    
};

class Circle{
private:
    double _x;
    double _y;
    double _r;

public:
    void setCircle(const double &x,const double &y,const double &r);
    void getCircleInfo() const;
    int judgePoint(const Point &p);
    double distance(double x,double y);

};




/**
 *@file Myclass.cpp
 *@author chenshining
 *@version v1.0
 *@date 2023-08-06
 */
#include <iostream>
#include<bits/stdc++.h>
#include<cmath>

#include "MyClass.h"
using namespace std;

void Myteacher::setAge(const int &age){
    _age = age;
}

void Myteacher::setName(const std::string &name){
    _name = name;
}

int Myteacher::getAge() const{
    return _age;
}

string Myteacher::getName() const{
    return _name;
}
 
void Circle::setCircle(const double &x,const double &y,const double &r){
    _x = x;
    _y = y;
    _r = r;

}

void Circle::getCircleInfo() const{
    cout << "圆心是：" <<  _x << " , " << _y << endl;
    cout << "圆的半径是：" <<  _r << endl;

}
double Circle::distance(double x,double y){
    double d = sqrt((_x - x) * (_x - x)+ (_y - y) * (_y - y));
    return d;
}

int Circle::judgePoint(const Point &p){
    int flag = 0;
    if (Circle::distance(p._x,p._y) == _r){
        flag = 0;
    }else if (Circle::distance(p._x,p._y) < _r){
        flag = -1;
    }else {
        flag = 1;
    }
    return flag;
}

void Point::setPoint(const double &x,const double &y){
    Point::_x = x;
    Point::_y = y;
}
void Point::getPointInfo() const{
    cout << "点是：" << _x << " , " << _y << endl;
}

double Point::distance(double x,double y){
    double d = sqrt((_x - x) * (_x - x)+ (_y - y) * (_y - y));
    return d;
}






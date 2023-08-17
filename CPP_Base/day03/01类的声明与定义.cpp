/**
 *@file 01类的声明与定义.cpp
 *@author chenshining
 *@version v1.0
 *@date 2023-08-06
 */
#include <iostream>
#include <vector>
#include <string>
#include "MyClass.h"

using namespace std;

#if(0)

int main(){

    Myteacher t1;
    t1.setAge(20);
    t1.setName("csn");
    cout << "t1.name:" << t1.getName() << endl;
    cout << "t1.age:" << t1.getAge() << endl;
    return 0;
}
#endif

#if(0)
int main(){

    Circle c1;
    c1.setCircle(5.0,5.0,5.0);
    Point p1;
    p1.setPoint(0.0,5.0);
    int flag = c1.judgePoint(p1);
    c1.getCircleInfo();
    p1.getPointInfo();
    cout << "flag:" << flag << endl;
    return 0;

}
#endif  
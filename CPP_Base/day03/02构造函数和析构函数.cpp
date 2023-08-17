/**
 *@file 02构造函数和析构函数.cpp
 *@author chenshining
 *@version v1.0
 *@date 2023-08-07
 */
#include <iostream>
#include <vector>
#include <string>

using namespace std;


/**
 * 构造函数的定义：
 * 1. C++中的类可以定义与类名相同的特殊成员函数，这种与类名相同的成员函数叫做构造函数；
 * 2. 构造函数在定义时可以有参数；
 * 3. 没有任何返回类型的声明。
 * 构造函数的调用
 * 1. 自动调用：一般情况下 C++编译器会自动调用构造函数
 * 2. 手动调用：在一些情况下则需要手工调用构造函数
 * 析构函数的定义：
 * 1. 
*/ 

class Test{
private:
    int _x = 0;
    int _y = 0;
public:
    void print() const{
        cout << "_x:" << _x << "_y:" << _y << endl;
        cout << "我是普通成员函数print" << endl;
    }
    int getX() {
        
        cout << "我是普通成员函数getX" << endl;
        return _x;
    }
    int getY() {
        
        cout << "我是普通成员函数getY" << endl;
        return _y;
    }
    Test(){
        printf("\na:%d b:%d\n", _x, _y);
        cout << "我是无参构造函数Test()" << endl;
    }
    Test( const int &x , const int &y){
        _x = x;
        _y = y;
        printf("\na:%d b:%d\n", _x, _y);
        cout << "我是有参构造函数Test()" << endl;
    }
    Test(const Test &obj){
        _x = obj._x;
        _y = obj._y; 
        printf("\na:%d b:%d\n", _x, _y);
        cout << "我是copy造函数Test()" << endl;
    }
    ~Test(){
        cout << "我是析构函数Test()" << endl;
    }

};

void function(Test obj){

    cout << "Funtion:" << obj.getX() << "," << obj.getY() << endl ;

}
void function(){
    Test t1;
    Test t2(10,20);       //c++编译器默认调用有参构造函数 直接初始化
    Test t3 = Test(100,300);    //调用有参构造函数 拷贝初始化
    // Test t4 = (100,300);  // 报错，   逗号表达式 (100,300)---> 300

    Test t5 = t2; // 用实例对象t2初始化t5 
    // Test t5(t2);   //用实例对象t2初始化t5
    Test t0;
    t0.print();
    t0 = t3;       // t3 给t0 赋值 这与63行 使用例对象初始化不一样 赋值操作不会调用构造函数
    t0.print();
}

int main(){

    // function();
    Test t1(200,300);
    function(t1); //实参t1去初始化形参，此时会第调用copy构造函数



    return 0;

    
}
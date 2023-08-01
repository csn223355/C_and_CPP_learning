/**
 *@file 07函数的返回值作为引用.cpp
 *@author chenshining
 *@version v1.0
 *@date 2023-07-12
 */
#include <iostream>
#include <vector>
#include <string>

using namespace std;


int fun1(){
    int a = 10;
    cout << "a:" << a << endl;
    cout << "调用函数fun1,返回的是a的值" << endl;
    return a; 
}

int& fun2(){
    int a = 10;
    cout << "a:" << a << endl;
    cout << "调用函数fun2,返回的是a变量本身的内存空间" << endl;
    return a; 
}

int fun3(){
    int static a = 10;
    a ++;
    cout << "a:" << a << endl;
    cout << "调用函数fun3,返回的是a的值" << endl;
    return a; 
}

int& fun4(){
    int static a = 10;
    a ++;
    cout << "a:" << a << endl;
    cout << "调用函数fun4,返回的是a变量本身的内存空间" << endl;
    return a; 
}

int main(){
    int a1 = 0;  
    int a2 = 0;
    a1 = fun1();     //a:10 调用函数fun1,返回的是a的值
    // a2 = fun2();     //   a:10 调用函数fun2,返回的是a变量本身的内存空间
    //int &a3 = fun2();    //段错误 (核心已转储)
    printf("a1=%d\na2=%d\n",a1,a2);
    int a4 = 0;
    int a5 = 0;
    
    a4 = fun3();
    a5 = fun4();
    int &a6 = fun4();
    printf("a4=%d\na5=%d\na6=%d/n",a4,a5,a6);
    fun4() = 100;
    fun4();
    printf("a4=%d\na5=%d\na6=%d\n",a4,a5,a6);

    
}
/**
 * 总结：当函数返回值为引用时
 * 若返回栈变量，不能成为其它引用的初始值，不能作为左值使用。
 * 若返回静态变量或全局变量，可以成为其他引用的初始值，即可作为右值使用，也可作为左值使用
*/
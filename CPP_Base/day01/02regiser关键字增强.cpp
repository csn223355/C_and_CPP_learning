/**
 *@file 02regiser关键字增强.cpp
 *@author chenshining
 *@version v1.0
 *@date 2023-07-05
 */
#include <iostream>
#include <vector>
// register 关键字 请求编译器将变量直接放在寄存器里面，使得运行速度更快
// C语言中无法取得register变量地址
// 在C++中依然支持register关键字
// C++编译器有自己的优化方式，不使用register也可能做优化 如for(int i=0;i<=100;i++){}
// C++中可以取得register变量的地址
using namespace std;


int main(){

    register int a = 10;
    printf("&a = %d",&a);    
    return 0;
}


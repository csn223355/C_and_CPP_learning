/**
 *@file 09常量引用.cpp
 *@author chenshining
 *@version v1.0
 *@date 2023-08-01
 */
#include <iostream>
#include <vector>
#include <string>

using namespace std; 
#if(0)
int main(){


    //普通引用
    int a = 10;
    int &b = a;    //  ----> int * const b = &a

    //常引用
    int x = 20;
    const int &y = x;   //  ------> const int * const y = &x;
    //常引用是让 变量 引用只读属性，不能通过y 修改 x  
    // y = 20;   // 报错：assignment of read-only reference ‘y’
    return 0;
}
#endif
#if(0)
int main(){


    //普通引用
    int a = 10;
    int &b = a;    //  ----> int * const b = &a;

    //常引用
    int x = 20;
    const int * const y = &x;
    //常引用是让 变量 引用只读属性，不能通过y 修改 x  
    // y = 20;   // 报错：assignment of read-only reference ‘y’
    // y = 20;  //  报错：assignment of read-only reference ‘y’
    cout << *y <<endl; 
    return 0;
}
#endif

/**
 * 常引用初始化，分为两种
 * 1.用变量初始化
 * 2. 字面两初始化
*/
int main(){

    int a = 20;
    const int &b = 20; //用变量初始化
    // int &m = 21;    //字面量21 没有内存，所以报错
    const int &c = 100;  //2. 字面两初始化     const 修饰引用变量时，会为变量c生成单独内存空间，c指向这个空间

    
    return 0;
}
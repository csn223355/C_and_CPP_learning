/**
 *@file 05const基础用法.cpp
 *@author chenshining
 *@version v1.0
 *@date 2023-07-08
 */
#include <iostream>
#include <vector>
#include <string>
using namespace std;
#if(0)
/**
 * const int a = 10; // =====> int const a = 10  代表一个常整形数
    const int *b;   //b是一个指向常整形数 的指针(所指向的内存数据不能被修改，但是变量b本身可以修改
    int * cosnt c; // c 是一个常指针 ，变量从本身不可被修改，但是其所指向的内存空间可以被修改
    const int * const d; // d是一个指向常整形的常指针，变量本身和它所指向的内训空间都不能被修改。
*/
/**
 * const 的好处：
 * 1指针做函数参数，可以有效的提高代码可读性，减少bug；
 * 2清楚的分清参数的输入和输出特性
*/

// C++中 const 修饰的变量不可间接修改，C语言中可以修改

/**
 * C++编译器对const常量的处理
    当碰见常量声明时，在符号表中放入常量 =问题：那有如何解释取地址
    编译过程中若发现使用常量则直接以符号表中的值替换
    编译过程中若发现对const使用了extern或者&操作符，则给对应的常量分配存储空间（兼容C）
*/
struct Person
{
    string name;
    int age;

};

void  OperatePerson01(const Person *pP){
    // pP->age = 10;  //该语句回报错，报错的原因是 *pP指向的内存空间被const修饰，不可被修改。
}
void  OperatePerson02(Person * const  pP){
    pP->age = 10;  
    // pP = nullptr; 该语句报错
    // pP变量本身被const修饰，所以不可被修改，但是其所指向的内存空间是可以修改的。
}

int main(){

    int const a = 10;   // 当碰碰到const修饰的变量时 C++编译器会将该变=量放到一个符号表里面
    printf("未修改的a:%d\n",a);
    int *p = nullptr;
    p = (int *)&a; // 此时编译器会为a 开辟依据爱内存 变量p指向该内存。
    *p = 20;
    printf("修改后的a:%d\n",a);
    printf("*p:%d\n",*p);

     
    return 0;
}

/**
 * 总结：
 * C语言中的const变量
C语言中const变量是只读变量，有自己的存储空间
C++中的const常量
可能分配存储空间,也可能不分配存储空间 。 
以下两种情况会分配内存空间:

    当const常量为全局，并且需要在其它文件中使用
    当使用&操作符取const常量的地址
const 分配内存时机，在编译器编译时候 
*/
#endif

#if(0)
int main(){
    int a = 10;
    int b = 50;
    // int array[a+b]; //该语句在Linux内核可以通过，原因 gcc编译器支持。但是其它c/c++编译器不支持。
    int const c = 30;
    int const d = 40;
    int array[c+d]; //c/c++编译器可以通过

    
    return 0;
}
#endif

#if(0)
#define a 10
int main(){
    const int b = 30;
    int array[a+b];
    return 0;
}


#endif


#if(0)

void fun1(){
    int const a = 10;
    #define b = 20;
}

void fun2(){
    int const a = 10;
    #define b 20
    //#undef b
}
void fun3(){
    // printf("a = %d\n",a); 此语句报错 const 修饰的a是有作用域的，只在函数fun1()里面
    printf("b = %d\n",b);
}

int main(){
    fun1();
    fun3();
    return 0;
}

/**
 * 
 * 总结:
 *  1. const 与 #define 都是在与处理阶段执行处理
 *  2. const常量是由编译器处理的，提供类型检查和作用域检查
 *  3. 宏定义由预处理器处理，单纯的文本替换
*/
#endif



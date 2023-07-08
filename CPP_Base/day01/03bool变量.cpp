/**
 *@file 03bool变量.cpp
 *@author chenshining
 *@version v1.0
 *@date 2023-07-06
 */
#include <iostream>
#include <vector>

using namespace std;

/*
C++中的布尔类型
	C++在C语言的基本类型系统之上增加了bool
	C++中的bool可取的值只有true和false
	理论上bool只占用一个字节，
	如果多个bool变量定义在一起，可能会各占一个bit，这取决于编译器的实现

	true代表真值，编译器内部用1来表示
	false代表非真值，编译器内部用0来表示

	bool类型只有true（非0）和false（0）两个值
	C++编译器会在赋值时将非0值转换为true，0值转换为false
*/

int main(){

    bool i = true;
    bool i1,i2,i3,i4,i5,i6,i7,i8;
    i = 10;
    cout << "i:"<< i<<endl;
    i = -1;
    cout << "i:"<< i<<endl;
    i = 0;
    cout << "i:"<< i<<endl;
    i = false;
    cout << "i:"<< i<<endl;
    cout << "sizeof(i):"<< sizeof(i)<<endl;
    cout << "sizeof(i1):"<< sizeof(i1)<<endl;

    return 0;
}
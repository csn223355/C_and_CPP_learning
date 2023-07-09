/**
 *@file 06引用的基本概念.cpp
 *@author chenshining
 *@version v1.0
 *@date 2023-07-09
 */
#include <iostream>
#include <vector>
#include <string>

using namespace std;
#if(0)
/**
 * 引用是cpp的语法范畴
 * 语法 Type& name
 * 普通引用在声明时必须用其它的变量进行初始化，引用作为函数参数声明时不进行初始化
*/

int main(){

    int a = 10;
    int &b = a;  // 普通引用必须初始化
    b = 20;
    cout << "a = "<< a << endl;   // a=20
    cout << "b = " << b << endl;  // b = 20
    a = 50; 
    cout << "a = "<< a << endl;   // a = 50
    cout << "b = " << b << endl;  // b = 50  
    return 0;
}
#endif

#if(0)
void myswap(int a,int b){
    // 该函数并不能实现两个变量值的交换
    int c = 0;
    c = a;
    a = b;
    b = c;  
}

void myswap01(int *a,int *b ){
    // 使用指针作为参数
    int c = 0;
    c = *a;
    *a = *b;
    *b = c;
}

void myswap02(int &a,int &b ){
    // 这里使用引用作为参数
    int c = 0;
    c = a;
    a = b;
    b = c;
}

int main(){

    int a = 10,b = 30;
    myswap(a,b);
    cout<< "myswap执行后"<< "a = "<< a << endl << "b = " << b <<endl;
    a = 10,b = 30;
    myswap01(&a,&b);
    cout<< "myswap01执行后"<< "a = "<< a << endl << "b = " << b <<endl;
    a = 10,b = 30;
    myswap02(a,b);
    cout<< "myswap02执行后"<< "a = "<< a << endl << "b = " << b <<endl;
    return 0;
}
#endif

#if(0)
// 复杂类型的引用

struct Person
{
    string name;
    int age;
};


void OperatePerson(Person person){
    person.age = 10;
    
}

void OperatePerson01(Person *person){
    person->age = 20;
    
}
void OperatePerson02(Person &person){
    person.age = 30;
    
}

int main(){
    Person person = {"csn",0};
    cout << "person" << person.age <<endl;
    OperatePerson(person);
    cout << "person" << person.age <<endl;
    OperatePerson01(&person);
    cout << "person" << person.age <<endl;
    OperatePerson02(person);
    cout << "person" << person.age <<endl;
    return 0;
}
#endif

//引用的本质
/**
 * 1. 扑通引用需要初始化类似一个常量
 * 2. 普通引用有自己的内存空间 所占内存与指针大小类似
 * 3. 引用本质是一个常量指针
*/

struct Child
{
    int &age;
};
struct Child1
{
    int *age;
};
int main(){

    int a = 0;
    int &b = a;
    printf("&a = %ld\n&b = %ld\n",&a,&b);    //printf("&a = %n\n&b = %n\n",&a,&b);
    printf("sizeof(Child: %ld\n",sizeof(Child));
    printf("sizeof(Child1: %ld\n",sizeof(Child1));

}
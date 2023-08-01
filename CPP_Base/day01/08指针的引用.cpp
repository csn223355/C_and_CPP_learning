/**
 *@file 08指针的引用.cpp
 *@author chenshining
 *@version v1.0
 *@date 2023-07-13
 */
#include <iostream>
#include <vector>
#include <string>

using namespace std;

//指针的引用作为函数的输入


struct  Person
{
    string name = "";
    int age = 0;
};

int operate_person(Person **p,int age){
    //
    Person *temp = NULL;
    
    temp = (Person *)malloc(sizeof(Person));
    if (temp == NULL){
        return -1;
    }
    // p是实参的地址 ，*实参的地址，间接的去修改实参
    temp->name = "csn";
    temp->age = age;
    *p = temp;
    return 0;
    
}

void operate_person1(Person* &p,string name,int age){
    p = new Person;
    p->name = name;
    p->age = age;
}

void FreePerson(Person *p){
    if (p != NULL){
        delete p;
    }
}

int main(){

    Person *p1 = NULL;
    operate_person(&p1,10);
    cout << "p1->age: " << p1->age <<endl;
    cout << "p1->name: " << p1->name <<endl;
    FreePerson(p1);
    operate_person1(p1,"xiaoming",20);
    cout << "p1->age: " << p1->age <<endl;
    cout << "p1->name: " << p1->name <<endl;
    FreePerson(p1);
    return 0;
}

 
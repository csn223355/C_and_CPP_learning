/**
 *@file 01命名空间.cpp
 *@author chenshining
 *@version v1.0
 *@date 2023-07-05
 */
#include <iostream>
#include <vector>

// <iostream> 未引入标准的std，需要我们手动引用std命名空间


using namespace std;

// 定义命名空间
namespace NameSpaceA{
    int a = 0;
}

namespace NameSpaceB{
    int a = 1;
    namespace NameSpaceC{
        struct Teacher
        {
            char name[10];
            int age;
        };
        
    }
}

int main(){
    // 使用命名空间
    using namespace NameSpaceA;
    using NameSpaceB::NameSpaceC::Teacher; 
    cout<< a <<endl;
    cout <<NameSpaceB::a <<endl;
    Teacher t1 = {"csn",10};
    cout<< t1.name << endl; 
    cout<< t1.age << endl;



    return 0;
}
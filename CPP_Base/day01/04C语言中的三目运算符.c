#include<stdio.h>
#include<stddef.h>
#include<math.h>

/**
 * 在C语言中三目运算符的使用
 * C语言中表达式的返回结果存放于寄存器中
 * C语言 表达式的返回值是一个确定的值不是一个变量
 * 
*/

int main(){

    int a = 10;
    int b = 11;
    // ( a < b ? a : b) = 30; =====> 10=30;   报错： 表达式必须是可修改的左值
    // int c = ( a < b ? a : b);
    // printf("c:%d\n",c);
    *(a < b ? &a : &b) = 30;
    printf("c:%d\n",a);
    return 0;
}
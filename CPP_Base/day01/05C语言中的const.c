/**
 *@file 05C语言中的const.c
 *@author chenshining
 *@version v1.0
 *@date 2023-07-08
 */
#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include <math.h>

int main(){

    const int a = 10;
    //a = 10; // 报错 const 修饰的变量不可以直接修改
    printf("未修改的a:%d\n",a);
    int *c = NULL;
    c = &a;
    *c = 20;
    printf("修改后的a:%d\n",a);

    return 0;
}



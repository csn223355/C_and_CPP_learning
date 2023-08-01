/**
 *@file 02C语言中的register.c
 *@author chenshining
 *@version v1.0
 *@date 2023-07-17
 */
#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include <math.h>



int main(){

    register int a = 10;
    printf("&a = %d",&a);    // error: address of register variable ‘a’ requested
    return 0;
}

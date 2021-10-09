/**
 * inline，用于将一个函数声明为内联函数
 * 在程序编译时，编译器会将内联函数调用处用函数体替换，这一点类似于 C语言中的宏扩展
 * 
 * 在程序设计过程中，我们通常会将一些频繁被调用的短小函数声明为内联函数。
 * 
 * 为了使得 inline 声明内联函数有效，我们必须将 inline 关键字与函数体放在一起才行
 * inline 关键字放在函数声明处不会起作用，而应该将inline 关键字应该与函数体放在一起
 */

#include<iostream>
using namespace std;

void swap(int &a, int &b);
inline void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}


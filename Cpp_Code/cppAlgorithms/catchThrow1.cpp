#include<iostream>
using namespace std;

enum index{underflow, overflow};
/**在程序一开始我们定义了一个全局的枚举类型变量 index
 * 并且定义了两个值，分别为 underflow 和 overflow，这两个值作为抛出异常的返回值。
 */

int array_index(int *A, int n, int index);      //在这里声明函数

int main()
{
    int *A = new int[10];
    for(int i=0; i<10; i++){
        A[i] = i;
    }
    try
    {
        cout<<array_index(A,10,-1)<<endl;
    }
    catch(index e)
    {
        if(e == underflow)
        {
            cout<<"index underflow!"<<endl;
        }
        else if(e == overflow)
        {
            cout<<"index overflow!"<<endl;
        }
    }
    try
    {
        cout<<array_index(A,10,5)<<endl;
    }
    catch(index e)
    {
        if(e == underflow)
        {
            cout<<"index underflow!"<<endl;
        }
        else if(e == overflow)
        {
            cout<<"index overflow!"<<endl;
        }
    }
    try
    {
        cout<<array_index(A,10,15)<<endl;
    }
    catch(index e)
    {
        if(e == underflow)
        {
            cout<<"index underflow!"<<endl;
        }
        else if(e == overflow)
        {
            cout<<"index overflow!"<<endl;
        }
    }
    /**
     * try 程序块中的程序语句为可能出现异常情况的语句，catch 则为针对异常的处理语句。
     */

    return 0;
}

/**
 * 在这里定义函数
 * array_index() 函数用于返回数组 index 下标的数值，如果出现异常则抛出异常。
 */
int array_index(int *A, int n, int index)
{
    if(index < 0){
        throw underflow;  //需要抛出的异常
    }
    if(index > n-1){
        throw overflow;
    }
    if(index >= 0 && index <= n - 1){
        return A[index];
    }
    return 0;
}

/**
 * 在C语言中，异常通常是通过函数返回值获得
 * 但这样一来，函数是否产生异常则需要通过检测函数的返回值才能得知
 * 而在 C++中，当函数抛出一个返回值时，即使不用 try 和 catch 语句，异常还是会被处理的
 * 系统会自动调用默认处理函数 unexpected() 来执行
 */
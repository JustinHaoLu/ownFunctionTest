#include<iostream>
using namespace std;

int & valplus(int &a);

int main()
{
    int num1 = 10;
    int num2;
    num2 = valplus(num1);
    cout<<num1<<" "<<num2<<endl;
    return 0;
}
/**
 * 本例中的 & valplus() 函数在将 a 变量加上 5 之后
 * 其运算结果是直接拷贝给 num2 的，中间没有经过拷贝给临时空间，再从临时存储空间中拷贝出来的这么一个过程
 * 这就是普通的传值返回和引用返回的区别。
 */
int & valplus(int &a)
{
    a = a + 5;
    return a;
}


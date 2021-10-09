#include<iostream>
using namespace std;

int valplus(int &a);

int main()
{
    int num1 = 10;
    int num2;
    num2 = valplus(num1);
    cout<<num1<<" "<<num2<<endl;
    return 0;
}
/**
 * 在本例中，valplus() 函数采用的是普通的传值返回；
 * 也即将变量 a 的结果加上 5 之后，将结果拷贝到一个临时存储空间，然后再从临时存储空间拷贝给 num2 变量。  
*/
int valplus(int &a)
{
    a = a + 5;
    return a;
}


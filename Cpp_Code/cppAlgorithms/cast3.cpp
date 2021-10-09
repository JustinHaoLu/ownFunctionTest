/**使用 const_cast 通常是一种无奈之举
 * 同时也建议大家在今后的 C++ 程序设计过程中一定不要利用 const_cast 去掉指针
 * 或引用的常量性并且去修改原始变量的数值，这是一种非常不好的行为。
 */

#include<iostream>
using namespace std;

const int & Search(const int * a, int n, int val);

int main()
{
    int a[10] = {0,1,2,3,4,5,6,7,8,9};
    int val = 5;
    int &p = const_cast<int &>(Search(a, 10, val));         //对于引用，也可以使用 const_cast 来强制去掉常量性
    if(p == NULL)
        cout<<"Not found the val in array a"<<endl;
    else
        cout<<"hvae found the val in array a and the val = "<<p<<endl;
    return 0;
}

const int & Search(const int * a, int n, int val)
{
    int i;
    for(i=0; i<n; i++)
    {
        if(a[i] == val)
            return a[i];
    }
    return  NULL;
}


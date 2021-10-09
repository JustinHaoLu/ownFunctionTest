#include<iostream>
using namespace std;

const int * Search(const int * a, int n, int val);

int main()
{
    int a[10] = {0,1,2,3,4,5,6,7,8,9};
    int val = 5;
    int *p;
    p = const_cast<int *>(Search(a, 10, val));          //去除指针Serch的常量性
    if(p == NULL)
        cout<<"Not found the val in array a"<<endl;
    else
        cout<<"hvae found the val in array a and the val = "<<*p<<endl;
    return 0;
}

const int * Search(const int * a, int n, int val)
{
    int i;
    for(i=0; i<n; i++)
    {
        if(a[i] == val)
            return &a[i];
    }
    return  NULL;
}
/**
 * Search() 函数用于在 a 数组中寻找 val 值，如果找到了就返回该值的地址，如果没有找到则返回 NULL
 * Search() 函数的返回值是 const 指针，当我们在 a 数组中找到了 val 值的时候，我们会返回 val 的地址
 * 最关键的是 a 数组在 main() 函数中并不是 const
 * 因此即使我们去掉返回值的常量性有可能会造成 a 数组被修改，但是这也依然是安全的
 */


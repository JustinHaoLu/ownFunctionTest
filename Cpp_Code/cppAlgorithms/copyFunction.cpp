#include<iostream>
using namespace std;


class Array
{
public:
    Array(){length = 0; num = NULL;};
    Array(int * A, int n);
    Array(Array &a);
    void setnum(int value, int index);
    int * getaddress();
    int getlength(){return length;}
    void display();
private:
    int length;
    int * num;
};

Array::Array(Array & a)
{
    if(a.num != NULL)
    {
        length = a.length;
        num = new int[length];
        for(int i=0; i<length; i++)
            num[i] = a.num[i];
    }
    else
    {
        length = 0;
        num = 0;
    }  
}

Array::Array(int *A, int n)
{
    num = new int[n];
    length = n;
    for(int i=0; i<n; i++)
        num[i] = A[i];
}

void Array::setnum(int value, int index)
{
    if(index < length)
        num[index] = value;
    else
        cout<<"index out of range!"<<endl;
}

void Array::display()
{
    for(int i=0; i<length; i++)
        cout<<num[i]<<" ";
    cout<<endl;
}

int * Array::getaddress()
{
    return num;
}

int main()
{
    int A[5] = {1,2,3,4,5};
    Array arr1(A, 5);
    arr1.display();
    Array arr2(arr1);
    arr2.display();
    arr2.setnum(8,2);
    arr2.display();
    arr1.display();
    Array arr3(arr1);
    arr3.setnum(8, 8);
    arr3.display();
    cout<<arr1.getaddress()<<" "<<arr2.getaddress()<<" "<<arr3.getaddress()<<endl;
    return 0;
}
/**
 * 拷贝构造函数参数为引用
 * 系统自动生成的拷贝构造函数功能简单
 * 只是将 arr1 的数组首地址直接赋值给 arr2 的数组首地址
 * 也即 num = a.num;这必然导致两个对象指向同一块内存
 */
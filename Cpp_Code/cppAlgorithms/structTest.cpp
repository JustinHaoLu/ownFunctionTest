/**
 * 在 C++ 中，struct 与 class 基本是通用的
 * 唯一不同的是:
 * 如果使用 class 关键字，类中定义的成员变量或成员函数默认都是 private 属性的
 * 而采用 struct 关键字，结构体中定义的成员变量或成员函数默认都是 public 属性的
 */
#include<iostream>
using namespace std;

struct book
{
    double price;
    char *title;
    void display();
};

void book::display()
{
    cout<<title<<", price: "<<price<<endl;
}

int main()
{
    book Alice;
    Alice.price = 29.9;                     //It’s OK,struct 声明中默认的属性为 public 属性，在 struct 外部可以随意访问。
    Alice.title = "Alice in wonderland";    //It’s OK
    Alice.display();                        //It’s OK
    return 0;
}
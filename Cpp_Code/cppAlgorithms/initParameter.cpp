#include<iostream>
using namespace std;

class book
{
public:
    book(){}
    book(char* a, double p);
    void setprice(double a);
    double getprice();
    void settitle(char* a);
    char * gettitle();
    void display();
private:
    double price;
    char * title;
};


/**
 * 参数初始化表
 * book(char *a, double p) 时
 * 不再是在函数体中一一赋值进行初始化，其函数体为空
 * 在函数首部与函数体之间增添了一个:
 * 冒号“：”并加上title(a),price(p)语句
 * 等同于在函数体内部写title = a; price = p;语句
 * 这种初始化对象的方式就称为参数初始化表
 */
book::book(char *a, double p):title(a),price(p){}


//参数初始化表还有一个很重要的作用，那就是为 const 成员变量初始化
/**
 * class Array
{
public:
    Array(): length(0)  //length参数被定义为const类型，应该是不可变的，但是如果要求参数初始化，可以使用参数初始化表
    {
        num = NULL;
    };
private:
    const int length;
    int * num;
};
*/



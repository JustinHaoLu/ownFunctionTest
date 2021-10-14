#include<iostream>
using namespace std;

class book
{
public:
    void setprice(double a);
    double getprice();
private:
    double price;
    /**
     * 我们不能直接访问 price 这个成员变量
     * 因为其属性被设置为 private 了
     * 但是类中提供了两个 public 属性的成员函数可以供我们操作 price 这个变量。
     */
};

void book::setprice(double a)
{
    price = a;
}

double book::getprice()
{
    return price;
}

int main()
{
    book Alice;
    Alice.setprice(29.9);
    cout<<"The price of Alice is $"<<Alice.getprice()<<endl;   
    

    //访问可以通过成员选择符.或指针操作符->来完成。
    book *Harry = new book;
    Harry->setprice(49.9);
    cout<<"The price of Harry is $"<<Harry->getprice()<<endl;

    return 0;
}


#include<iostream>
using namespace std;

class book
{
public:
    void setprice(double a);
    double getprice();
    void settitle(char* a);
    char * gettitle();
private:
    double price;
    char * title;
};

void book::setprice(double a)
{
    price = a;
}

double book::getprice()
{
    return price;
}

void book::settitle(char* a)
{
    title = a;
}

char * book::gettitle()
{
    return title;
}

/**
 * display()函数
 * 参数：book类对象的引用
 * 作用：打印图书名信息和价格信息
 */
void display(book & b)          //参数是引用
{
    cout<<"The price of "<<b.gettitle()<<" is $"<<b.getprice()<<endl;
}

/**
 * init()函数
 * 返回值：book类对象的引用
 * 作用：初始化对象
 */
book & init(char *t, double p)  //返回值是引用
{
    static book b;
    b.settitle(t);
    b.setprice(p);
    return b;
    /**
     * 函数返回一个对象的引用的时候
     * 最好该对象不是局部变量或临时变量
     * （如果是局部变量或临时变量，一旦该函数运行结束，该局部变量或临时变量很有可能会被系统销毁）
     * 如本例中 init() 函数在定义 b 对象时前面加上了一个 static 关键字
     * 将 b 对象声明为一个静态对象。
     */
}

int main()
{
    book Alice;
    Alice.settitle("Alice in Wonderland");
    Alice.setprice(29.9);
    display(Alice);
    
    book Harry;
    Harry = init("Harry Potter", 49.9);
    display(Harry);
    return 0;
}


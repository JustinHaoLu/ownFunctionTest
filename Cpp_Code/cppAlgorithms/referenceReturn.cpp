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

void display(book & b)
{
    cout<<"The price of "<<b.gettitle()<<" is $"<<b.getprice()<<endl;
}

book & init(char *t, double p)
{
    static book b;
    b.settitle(t);
    b.setprice(p);
    return b;
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


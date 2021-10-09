#include<iostream>
using namespace std;

int main()
{
    int sum = 0;
    int val = 0;
    cout<<"Please input a number :"<<endl;
    while(cin>>val)
    {
        sum += val;
        cout<<"Please input next number :"<<endl;
    }
    cout<<"The sum of all number is sum = "<<sum<<endl;
    return 0;
}


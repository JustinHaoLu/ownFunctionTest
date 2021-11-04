#include <iostream>
#include <iomanip>
using namespace std;

int tenOutSix(int n){
    const int i = 8;
    int oct[100];               //存放取余数之后的数；
    int oct1[100];              //存放相除之后的数；
    for(int a = 0;a < 100;a++){
        oct[a] = n % i;
        oct1[a] = n / i;
        oct[a + 1] = oct1[a] % i;
        oct1[a + 1] = oct1[a] / i;
        if(oct1[a] % i == 0 && oct1[a] < i){
            break;
        }
    }
    if(n > 0 && n < i){
        oct[100] = n;
    }
    return oct[100];
}

int main()
{
    int n, octn[100];
    cout<<"请输入一个十进制的数据：";
    cin>>n;
    octn[100] = tenOutSix(n);
    cout<<octn<<endl;
    return 0;
    }
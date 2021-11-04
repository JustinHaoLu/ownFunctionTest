//下列函数的功能是求两个数的最大公约数和最小公倍数，要求输入输出均在主函数中完成
#include <iostream>
using namespace std;
int gys(int a, int b);
int gbs(int a, int b);

int gys(int a, int b){
    int i, x;
    for(i = a;i > 0;i--){
        if(a % i == 0 && b % i == 0){
            x = i;
            break;
        }
    }
    return x;
}

int gbs(int a, int b){
    int i;
    for(i = a;;i++){
        if(i % a == 0 && i % b == 0){
            return i;
            break;
        }
    }
}

int main(){
    int a, b, c, d;
    cin>>a>>b;
    c = gys(a, b);
    d = gbs(a, b);
    cout<<c<<' '<<d;
    return 0;
}
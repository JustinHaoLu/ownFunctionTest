#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    long long int x;
    cin>>x;
    cout<<"0"<<oct<<x<<" "<<"0x"<<hex<<x<<endl;
    printf("%#llo",x);
    printf("%#llx",x);
    return 0;
}
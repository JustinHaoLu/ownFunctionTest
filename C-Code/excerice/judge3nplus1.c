#include <stdio.h>

int main(){
    int count = 0;
    long n;             //定义64位长整型数
    scanf("%ld", &n);   //此处"%lld"也可写成"%I64d"
    while(n > 1)
    {
        if(n % 2 == 1){
            n = n * 3 + 1;
        }
        else{
            n /= 2;
        }
        count++;
    }
    printf("%d\n", count);
    return 0;
}
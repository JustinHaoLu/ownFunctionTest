//This function can calculate the times result of input number.
#include <stdio.h>

int main()
{
    int i, n, sum=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum = sum * i;
    }
    printf("%d!=%d\n",n,sum);
    return 0;
}


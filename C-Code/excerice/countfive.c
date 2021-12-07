#include<stdio.h>
int countdigit(int n,int digit);
int main()
{
    int a,b=5;
    while(scanf("%d",&a)!=EOF)
        printf("%d\n",countdigit(a,b));
    return 0;
}
int countdigit(int n,int digit)
{
    int i=0;
    while(n){
        if((n%10)==digit)
        {
            i++;
        }
        n/=10;
    }
    return i;
}


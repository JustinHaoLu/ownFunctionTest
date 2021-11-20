#include<stdio.h>
int main()
{
    int n,a[100];
    while(scanf("%d",&n)!=EOF)
    {
        int i=0;
        while(n>0)
        {
            a[i++]=n%2;
            n=n/2;
        }
        while(i--)
        {
            printf("%d",a[i]);
        }
        printf("\n");
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int n,a[20],b[20];
    while(scanf("%d",&n)!=EOF)
    {
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]); 
        }
    
    for(int i=1;i<n;i++)
    {
        b[i-1]=a[i];
    }
    b[n-1]=a[0];
    
    for(int i=0;i<n-1;i++)
    {
        printf("%d ",b[i]); 
    }
    printf("%d\n",b[n-1]);
    }
    return 0;
}
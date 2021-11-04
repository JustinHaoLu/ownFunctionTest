#include <stdio.h>
int main()
{
    int n,i,j,max=0,a[100],sum=0;
    int p[10000]={0};
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if (a[i]>max) max=a[i];
    }
    for(i=2;i<=max;i++)
    {
        if (p[i]) continue;
        j=2;
        while (i*j<=max) 
        {
            p[i*j]=1;
            j++;
        }
    }   //用筛选法筛选出素数。
    p[0]=1;
    p[1]=1;
    for(i=0;i<n;i++)
        if(!p[a[i]])
        {  
            printf("%d ",a[i]);
            sum+=a[i];
        }  //判断该数是否为输出，是则输出。
    printf("s=%d\n",sum);//输出素数的和。
    return 0;
}
#include<stdio.h>
void sort(int *p,int n)
{
    int i,t;
    for(i=0;i<n/2;i++)
    {
        t=*(p+i);
        *(p+i)=*(p+n-i-1);
        *(p+n-i-1)=t;
    }
}
int main()
{
    int n,num[20],*p,i;
    p=&num[0];
    while(scanf("%d",&n)!=EOF)
    {
        for(i=0;i<n;i++)
            scanf("%d",&num[i]);
        sort(p,n);
        for(i=0;i<n-1;i++)
            printf("%d ",num[i]);
        printf("%d\n",num[n-1]);
    }
    return 0;
}
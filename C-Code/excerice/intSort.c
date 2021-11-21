#include<stdio.h>
int main()
{
	void sort(int *p,int n);
    int n,a[100],i;
    while(scanf("%d",&n)!=EOF)
    {
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        sort(a,n);
        for(i=0;i<n-1;i++)
            printf("%d ",a[i]);
        printf("%d\n",a[n-1]);
    }
    return 0;
} 
void sort(int *p,int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=i;j<n;j++)
        {
            if(p[i]>p[j])
            {
                temp=p[i];
                p[i]=p[j];
                p[j]=temp;
            }
        }      
    }  
}
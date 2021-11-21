#include<stdio.h>
int move(int *a,int n,int m)
{
    int t[100];
	int i;
	for(i=0;i<n;i++)
	{
		t[i]=a[i];
	}
	for(i=0;i<m;i++)
	{
		a[i]=t[n-m+i];
	}
	for(i=m;i<n;i++)
	{
		a[i]=t[i-m];
	}	
}
int main()
{
	int a[20];
	int n,m;
	int i;
	while(scanf("%d%d",&n,&m)!=EOF)
	{
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		move(a,n,m);
		for(i=0;i<n-1;i++)
		{
			printf("%d ",a[i]);
		}
		printf("%d\n",a[i]);
	}
} 

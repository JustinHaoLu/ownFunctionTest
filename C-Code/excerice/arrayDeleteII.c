#include<stdio.h>
int main()
{
	int n,m,a[20],i,flag;
	while(scanf("%d",&n)!=EOF)
	{
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);      //将数据赋值到数组
		}
		scanf("%d",&m);
		flag=0;
		for(i=0;i<n;i++)            //查找数据m，没有找到就直接输出，找到了的就不输出
		{
			if(a[i] != m && flag == 0)
			{
				printf("%d",a[i]);
				flag=2;
			}
			else if(a[i] != m && flag == 1)
			{
				printf(" %d",a[i]);
			}
			if(flag==2)
			{
			    flag=1;
			}   
		}
	    printf("\n");
	}
	return 0;
}

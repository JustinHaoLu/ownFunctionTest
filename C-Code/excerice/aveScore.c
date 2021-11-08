#include<stdio.h>
int main()
{
	int i,qu,max,min;
	float ave,s,a[200]={0};
	while(scanf("%d",&qu)!=EOF)
	{
		s=0;
		for(i=1;i<=qu;i++)
		{
			scanf("%f",&a[i]);
			s += a[i];
		}
		max=1;
		min=1;
		for(i=2;i<=qu;i++)
		{
			if(a[i]>a[max])
			{
				max=i;
			}
			if(a[i]<a[min])
			{
				min=i;
			}
		}
		s -= a[max] + a[min];
		ave = s / (qu - 2);
		printf("%.2f\n",ave);
	}
	return 0;
}

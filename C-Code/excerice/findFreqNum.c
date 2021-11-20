/**找出数组中出现字数最多的那个数：
 * 先用了冒泡排序，然后默认第一个出现最多的数是第一个
 * t记录当前出现次数最多的数，m记录t出现的次数，k记录当前数出现的次数
 * 当在当前数与前一个数不相等且k>m时方进行t与m的更新。
*/
#include<stdio.h>
int main()
{
	int n,i,j,k,t,m,a[25];      //t记录当前出现次数最多的数，m记录t出现的次数，k记录当前数出现的次数
	while(scanf("%d",&n)!=EOF)
	{
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		for(i=0;i<n-1;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(a[i]>a[j])
				{
					t=a[i];
					a[i]=a[j];
					a[j]=t;
				}
			}
		}
		t=a[0];
		m=1;
		k=1;
		for(i=1;i<n;i++)
		{
			if(a[i]!=a[i-1])
			{
				if(k>m)
				{
					m=k;
					t=a[i-1];
				}
				k=1;
			}	
			else
				k++;	
		}
		if(k>m)
		{
			m=k;
			t=a[i-1];
		}
		printf("%d\n",t);
	}
	return 0;
}
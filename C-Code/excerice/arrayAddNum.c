#include<stdio.h>
int main()
{
	int n,m,k,a[21],i,j;
	while(scanf("%d",&n)!=EOF)
	{
		for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);  //要求输入到数组的数原本就是有序的数
        }
        scanf("%d",&m);         //输入要插入的数字m
        scanf("%d",&k);         //输入到时候要返回的数组下标k
        j=-1;
        for(i=0;i<n;i++)
        {
            if(m<a[i])          //遍历数组，发现是否有比插入的数字m小的数，没有则返回数字所对应的数组的下标给j
            {
                j=i;
                break;
            }
        }
        if(j<0)                 //j < 0表示没有找到比m小的数字，则把m写入数组的最后一位
        {
            a[n]=m;
        }
        else
        {
            for(i=n;i>j;i--)    //如果可以插入，则在j之后的位置上，j之后的数字依次后移一位
            {
                a[i]=a[i-1];
            }
            a[j]=m;             //第j位为m
        }
        printf("%d",a[0]);
        for(i=1;i<=n;i++)
        {
            printf(" %d",a[i]);
        }
		printf("\n%d\n",a[k]);
	}
	return 0;
}

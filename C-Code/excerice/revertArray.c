#include<stdio.h>
int main()
{
	int n,m,a[20][20],b[20][20],i,j;
	while(scanf("%d%d",&n,&m)!=EOF)
	{
		for(i=0;i<=n-1;i++)
			for(j=0;j<=m-1;j++)
				scanf("%d",&a[i][j]);
		for(i=0;i<=n-1;i++)
			for(j=0;j<=m-1;j++)
				b[j][i]=a[i][j];
		for(i=0;i<=m-1;i++)
        {
			for(j=0;j<=n-1;j++)
                if(j==0)
                    printf("%d",b[i][j]);
                else
				    printf(" %d",b[i][j]);
			printf("\n");
        }
	}
	return 0;
}
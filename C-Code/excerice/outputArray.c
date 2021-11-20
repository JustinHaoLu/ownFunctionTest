#include<stdio.h>
int main()
{
    int n,m,i,j,a[20][20];
    while(scanf("%d %d",&n,&m)!=EOF)
    {
        int t=1;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                a[i][j]=t;
                t++;
            }
        }
        
        for(i=0;i<n;i++)
        {
            for(j=0;j<m-1;j++)
            {
                printf("%d ",a[i][j]);
            }
            printf("%d\n",a[i][m-1]);
        }
    }
    return 0;
}

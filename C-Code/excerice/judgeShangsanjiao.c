#include<stdio.h>
int main()
{
    int n,a[10][10],i,j;
    while(scanf("%d",&n)!=EOF)
    {
        int flag=1;   //flag用来做自动判断 
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
                scanf("%d",&a[i][j]);
        for(i=1;i<n;i++)
        {
            for(j=0;j<i;j++)
            {
                if(a[i][j]==0)
                    flag;
                else
                    flag=0;
            }
        }
        if(flag)
            printf("YES\n");
        if(flag==0)
            printf("NO\n");
    }
    return 0;
}

//9 minus 9 table.
#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,n;
    char a[10][10];
    while(scanf("%d",&n)!=EOF)
    {
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=i;j++)
            {
                a[i][j]=i*j;
                printf("%d*%d=%-2d ",j,i,a[i][j]);  
                /**
                 * %-2d
                 * "d" equals use int as output.
                 * "2"equals if the output number doesn't has enough number, use brick to full it.
                 * "-"equals using left odering, while the default is right ordering.
                 */
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
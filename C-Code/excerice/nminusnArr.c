#include<stdio.h>
int main()
{
    int n,m,i,j,k,a[30][30],b[30];

    while(scanf("%d",&n)!=EOF)
    {
        int sum1=0,sum2=0;
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                  scanf("%d",&a[i][j]);
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=i;j<i+1;j++)
            {
                sum1+=a[i][j];
            }
        }
        for(i=0;i<n;i++){
            for(j=n-1-i;j>n-2-i;j--)
                sum2+=a[i][j];
        }
        printf("%d ",sum1);
        printf("%d\n",sum2);
    }
    return 0;
}


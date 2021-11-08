#include<stdio.h>
int main()
{
    int n,a[20];
    int i,j,m;
    while (scanf("%d", &n) != EOF)
    {
        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        scanf("%d",&m);
        for(j=0; j<n; j++)
        {
            if(a[j]==m)
            {
                printf("%d\n",j);
                break;
            }
        }
        if(j == n)
            printf("No\n");
    }
    return 0;
}
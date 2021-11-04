/**
 * This algorithm has the function that it can output
 */
#include <stdio.h>
int main()
{
int i, j, k, n, i2;
    while(scanf("%d", &n) != EOF)
    {
        for(i = 1;i <= n;i++)                       //控制输入的层数
        {
            for(j = 1;j <= n - i;j++)               //控制输入的空格数
                printf(" ");
            for(k = 1;k <= 2 * i - 1;k++)           //控制输入的*的数量
                printf("*");
            printf("\n");
        }
        for(i2 = 1;i2 <= n - 1;i2++)                //控制倒转后输入的层数
        {
            for(j = 1;j <= i2;j++)                  //控制输入的空格数
                printf(" ");
            for(k = 1;k <= 2 * (n - i2) - 1;k++)    //控制输入的*的数量
                printf("*");
            printf("\n");
        } 
    }
    return 0;
}
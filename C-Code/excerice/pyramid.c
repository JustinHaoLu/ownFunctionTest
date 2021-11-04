#include <stdio.h>

int main()
{
    int N,i,j,k;
    while (scanf("%d",&N) != EOF)
    {
        for(i = 1;i <= N;i++)               //控制输入金字塔的层数
        {
            for(j = 1;j <= N - i;j++)       //控制金字塔每层前面的空格数
            {
                printf(" ");
            }
            for(k = 1;k <= 2 * i - 1;k++)   //控制金字塔每层要打印的"*"的个数
            {
                printf("*");
            }
            printf("\n");                   //一层输出完毕，输出下一层
        }
    }
    return 0;
}
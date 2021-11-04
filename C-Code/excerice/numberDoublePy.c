#include <stdio.h>
int main()
{
int i, j, k, n, i2, tmp, number[100];
    while(scanf("%d", &n) != EOF)
    {
        for(i = 0;i < n;i++)
        {
            number[i] = i + 1;
        }
        for(i = 0;i < n - 1;i++){
            for(j = 0;j < n - 1 - i;j++){
                if(number[j] < number[j + 1]){
                    tmp = number[j];
                    number[j] = number[j + 1];
                    number[j + 1] = tmp;
                }
            }
        }
        for(i = 1;i <= n;i++)
        {
            for(j = 1;j <= n - i;j++) 
                printf(" ");
            for(k = 1;k <= 2 * i - 1;k++)
                printf("%d",i);
            printf("\n");
        }
        for(i2 = 1;i2 <= n - 1;i2++)
        {
            for(j = 1;j <= i2;j++)
                printf(" ");
            for(k = 1;k <= 2 * (n - i2) - 1;k++)
                printf("%d",number[i2]);
            printf("\n");
        } 
    }
    return 0;
}
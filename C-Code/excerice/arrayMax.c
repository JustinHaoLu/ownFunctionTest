/**
 * This function can do the work that it can judge the input number of an array and calculate the max of it.
 */
/**
 * This function can do the work that it can judge the input number of an array and calculate the max of it.
 */

#include<stdio.h>
int main()
{
    int n, i, m, j, max = 0;
    int arr[100];
    scanf("%d",&n);
    for(i = 0;i < n;i++)
    {
        arr[i] = 0;
        scanf("%d",&m);
        for(j = 0;j < m;j++)
        {
            int k;
            scanf("%d",&k);
            if(k > max){
                max = k;
            }
        }
        arr[i] = max;
    }
    for(j = 0;j < n;j++)
    {
        printf("%d\n",arr[j]);
    }
    return 0;
}

/**
 *     for(i = 0;i < n;i++)
    {
        arr[i] = 0;
        scanf("%d",&m);
        for(j = 0;j < m;j++)
        {
            scanf("%d",&k[j]);
        }
        for(i = 0;i < m - 1;i++){
            for(int x = 0;x < m - i -1;x++){
                if(k[x] < k[x + 1]){
                    tmp = k[x];
                    k[x] = k[x + 1];
                    k[x + 1] = tmp;
                }
            }
        }
        printf("%d",k[0]);
    }
    */
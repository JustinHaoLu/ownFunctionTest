#include <stdio.h>
int main()
{
    int n, m;       //n equals the number of the array, and m equals the length of the n'th array.
    while (scanf("%d",&n) != EOF)
    {
        for(int i = 1;i <= n;i++){
            scanf("%d",&m);
            int a[m+1];
            for(int j = 0;j < m;j++){
                scanf("%d",&a[j]);
            }
            for(int k = m - 1;k >= 0;k--){
                printf("%d ",a[k]);
            }
            printf("\n");
        }
    }
    return 0;
}
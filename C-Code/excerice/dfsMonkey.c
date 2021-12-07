#include<stdio.h>
int n, tot;
void  dfs(int sum){
     if(sum ==  n){
         tot ++;
         return;
     }
     if(sum > n )
         return ;
     dfs(sum + 1);
     dfs(sum + 3);
}


int main()
{
    while(~scanf("%d",&n)){
         tot  = 0;
        dfs(0);
        printf("%d\n",tot);
    }
    return 0;
}
/**
 * This function can sum the total of the input factorial.
 */
#include<stdio.h>

int factorial(int n){
    if (n == 0 || n == 1)
        return 1;
    else
        return n*factorial(n - 1);
}
 
int main(){
    int n;
    while (scanf("%d",&n) != EOF)
    {
        int sum = 0;
        for (int i = 1; i <= n; i++){
            sum += factorial(i);
        }
        printf("%d\n", sum);
    }
    
    return 0;
}
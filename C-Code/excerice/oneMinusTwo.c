//This function can calculate the total number of input as the array "1-2+3-4..." and output the result.
#include <stdio.h>
#include <math.h>

int main(){
    int n, i, j = 0, sum = 0;
    scanf("%d",&n);
    for(i = 1;i <= n;i++){
        sum += i * pow(-1, j);
        j++;
    }
    printf("%d",sum);
    return 0; 
}
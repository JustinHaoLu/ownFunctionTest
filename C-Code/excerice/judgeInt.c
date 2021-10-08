/**
 *This is a function that can judge whether the input Integer number is below zero,better than zero or equal zero.   
 */
#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    if(n > 0){
        printf("+");
    }
    else if(n < 0){
        printf("-");
    }
    else {
        printf("0");
    }
    return 0;
}
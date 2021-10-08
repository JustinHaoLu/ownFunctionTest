//This is a function that can judge whether the input number is odd or even.
#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    if(n%2 == 0){
        printf("odd");
    }
    else{
        printf("even");
    }
    return 0;
}
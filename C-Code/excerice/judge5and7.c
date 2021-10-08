//This is a function that can judge the input number, whether it can be divided by 5 and 7.
#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    if(n%5 == 0 && n%7 == 0){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}
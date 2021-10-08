//This is a function that can judge whether the first input number can be divided by the second one and the third one.
#include <stdio.h>

int main(){
    int a, b, c;
    scanf("%d%d%d",&a,&b,&c);
    if(a%b == 0 && a%c == 0){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}
//This is a function that can judge whether the input three numbers can be gather as a right-angled triangle.
#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c;
    scanf("%d%d%d",&a,&b,&c);
    if(pow(a,2) == pow(b,2) + pow(c,2)
    || pow(b,2) == pow(a,2) + pow(c,2)
    || pow(c,2) == pow(b,2) + pow(a,2)){
        printf("yes");
    }
    else{
        printf("no");
    }
    return 0;
}
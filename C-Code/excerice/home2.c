/**
 * this is a algorithm that can compare three numbers and output the max one.
 */
#include <stdio.h>

int main(){
    int a, b, c, max;
    scanf("%d%d%d",&a,&b,&c);
    if(a < b && b > c){
        max = b;
        printf("%d",max);
        return 0;
    }
    else if(a > b && a > c){
        max = a;
        printf("%d",max);
        return 0;
    }
    else if(a < c && b < c){
        max = c;
        printf("%d",max);
        return 0;
    }
}
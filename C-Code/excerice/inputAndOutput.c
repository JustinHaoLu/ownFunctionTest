//This algorithm has the function that it can  calculate the total number of three input numbers.
#include <stdio.h>

int main(){
    int a, b, c, d;
    while(scanf("%d %d %d",&a, &b, &c) != EOF){
        d = a + b + c;
        printf("%d\n",d);
    }
    return 0;
}
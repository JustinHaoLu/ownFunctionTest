#include <stdio.h>

int main(){
    int a, b, c;
    scanf("%d%d",&a,&b);
    if(a < b){
        c = b;
        printf("%d",c);
        return 0;
    }
    else if(a > b){
        c = a;
        printf("%d",c);
        return 0;
    }
    else{
        printf("a = b");
        return 0;
    }
}
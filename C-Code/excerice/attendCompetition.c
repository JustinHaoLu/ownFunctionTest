//This function can get your rank and your absent times to judge whether you can take part in the ACM Competition.
#include <stdio.h>

int main(){
    int a, b;
    scanf("%d%d",&a,&b);
    if(a > 0 && b > 0){
        if(a <= 6 || b <= 2){
            printf("yes");
        }
        else if(a <= 20 && b <= 5){
            printf("yes");
        }
        else{
            printf("no");
        }
    }
    else{
        printf("no");
    }
    return 0;
}
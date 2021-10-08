//This function can judge the level of someone.
#include <stdio.h>

int main(){
    int basSco = 1500;
    int a, b, score;
    scanf("%d%d",&a,&b);
    score = basSco + 5 * a + 5 * b;
    if(score < 1600){
        printf("D");
    }
    else if(score >= 1600 && score < 1700){
        printf("C");
    }
    else if(score >= 1700 && score < 1800){
        printf("B");
    }
    else if(score >= 1800){
        printf("A");
    }
    return 0;
}
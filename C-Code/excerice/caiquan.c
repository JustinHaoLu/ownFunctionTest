#include<stdio.h>

void caiquan(int a,int b){
    if(a == 1 && b == 1)
        printf("tie\n");
    if(a == 2 && b == 2)
        printf("tie\n");
    if(a == 3 && b == 3)
        printf("tie\n");
    if(a == 1 && b == 2)
        printf("win\n");
    if(a == 1 && b == 3)
        printf("lose\n");
    if(a == 2 && b == 1)
        printf("lose\n");
    if(a == 2 && b == 3)
        printf("win\n");
    if(a == 3 && b == 1)
        printf("win\n");
    if(a == 3 && b == 2)
        printf("lose\n");
}
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    caiquan(a,b);
    return 0;
}
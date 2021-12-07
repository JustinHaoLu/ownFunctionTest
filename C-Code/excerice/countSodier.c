#include<stdio.h>
void countSod(int a, int b, int c, int d){
    for(int i = 0;i < 10000;i++){
        if(i % 3 == a && i % 5 == b && i % 7 == c && i % 11 == d)
            printf("%d",i);
    }
}
int main(){
    int T, i, a, b, c, d;
    while (scanf("%d",&T) != EOF)
    {
        while(T){
            for(i = 0;i < T;i++){
                scanf("%d %d %d %d",&a,&b,&c,&d);
                countSod(a,b,c,d);
            }
        }
    }
    return 0;
}
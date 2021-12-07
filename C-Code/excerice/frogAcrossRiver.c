#include<stdio.h>

int Jump(int s, int y){
    int a;
    if(s == 0){
        a = y + 1;
    }
    else{
        a = 2*Jump(s-1,y);
    }
    return a;
}
int main(){
    int T, s, y, a;
    while(scanf("%d",&T) != EOF){
        for(int i = 0;i < T;i++){
            scanf("%d %d",&s,&y);
            a = Jump(s,y);
            printf("%d\n",a);
        }
    }
    return 0;
}
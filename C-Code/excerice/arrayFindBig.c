#include<stdio.h>
int main(){
    int n,a[100],t,k;
    while(scanf("%d%d",&n,&a[0])!=EOF){
        k=a[0];
        for(int i=1;i<n;i++){
            scanf("%d",&a[i]);
            if(a[i]>k){
                k=a[i];
                t=i;
            }
        }
        printf("%d %d\n",k,t);
    }
    return 0;
}
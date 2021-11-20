#include<stdio.h>
int main(){
    int n,r,a[100];
    while(scanf("%d%d",&n,&r)!=EOF){
        int flag=1,i=0;
        if(n<0){
            flag=0;
            n=-n;
        }
        
        do{
            a[i++]=n%r;
            n=n/r;
        }while(n);
        
        if(flag==0)
        printf("-");
        while(i--){
            if(a[i]>9){
                printf("%c",'A'+a[i]-10);
            }
            else{
                printf("%d",a[i]);
            }
        }
        printf("\n");
    } 
    return 0;
}

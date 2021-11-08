#include<stdio.h>
int main(){
    int n,a[50];
    while(scanf("%d",&n)!=EOF){
        for(int i=0;i<n;i++)
           scanf("%d",&a[i]);
        int t;
        for(int i=1;i<n;i++){
            int flag=0;
            for(int j=0;j<n-i;j++){
                if(a[j]<a[j+1]){
                    t=a[j];
                    a[j]=a[j+1];
                    a[j+1]=t;
                    flag=1;
                }
                if(flag==0) break;
            }
        }
        for(int i=0;i<n-1;i++){
            printf("%d ",a[i]);
        }
        printf("%d\n",a[n-1]);
    }
    return 0;
}

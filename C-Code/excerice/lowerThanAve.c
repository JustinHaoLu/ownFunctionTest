#include<stdio.h>
int main(){
    int n,a[200],b[200];
    while(scanf("%d",&n)!=EOF){
        int s=0;
        for(int i=0;i<n;i++){
           scanf("%d",&a[i]);
           s+=a[i];
        }
        float ave=(float)s/n;
        int j=0;
        for(int i=0;i<n;i++){
            if(a[i]<ave){
            b[j]=a[i];
            j++;
            }
        }
        if(j==0)
          printf("\n");
        else{
            for(int i=0;i<j-1;i++){
                printf("%d ",b[i]);
            }
            printf("%d\n",b[j-1]);
        }
    }
    return 0;
}
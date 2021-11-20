#include<stdio.h>
int main()
 {
     int n,a[9]={0,10,20,30,40,50,60,70,80},i,k;
     scanf("%d",&n);
     a[9]=n;
     for(i=0;i<=9;i++)
     {
         if(a[i]>n)
         {
             k=a[9];
             a[9]=a[i];
             a[i]=k;
        }
    }
    for(i=0;i<=9;i++)
        printf("%d ",a[i]);
    return 0;
 }


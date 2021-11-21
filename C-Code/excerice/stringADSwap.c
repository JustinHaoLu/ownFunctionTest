#include<stdio.h> 
void swap1(int *p,int n){       //从小到大排列
    int temp; 
    for(int i=0;i<n-1;i++) 
        for(int j=i+1;j<n;j++) 
            if(p[i]>p[j])
            { 
                temp=p[i]; 
                p[i]=p[j]; 
                p[j]=temp; 
            } 
} 
void swap2(int *p,int n){       //从大到小排列
    int temp; 
    for(int i=0;i<n-1;i++) 
        for(int j=i+1;j<n;j++) 
            if(p[i]<p[j])
            { 
                temp=p[i]; 
                p[i]=p[j]; 
                p[j]=temp; 
            } 
} 
int main(){ 
    char n;int a[15]; 
    while(~scanf("%c",&n)){ 
        for(int i=0;i<10;i++){ 
            scanf("%d",&a[i]); 
        } 
        getchar(); 
        if(n=='A') 
            swap1(a,10); 
        else 
            swap2(a,10); 
        for(int i=0;i<10;i++){ 
            printf("%d ",a[i]); 
            if(i == 9)
                printf("%d\n",a[i]); 
        } 
    } 
} 


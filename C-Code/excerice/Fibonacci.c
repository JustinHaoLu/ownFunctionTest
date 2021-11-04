#include"stdio.h"
int main (){
    int N;
    int sum=0;
    printf("请输入项数N：");
    scanf("%d",&N); 
    int a[N];
    a[0]=1;
    a[1]=1;
    for(int j=2;j<N;j++) {
        a[j]=a[j-1]+a[j-2];
    }
    for(int j=0;j<N;j++) {
        sum+=a[j];
    }
    printf("出斐波那契数列的前N项结果为：%d",sum);
  return 0;
}
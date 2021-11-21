#include<stdio.h>
void swap(int *p1,int *p2)
{
    int flag;
    if(*p1>*p2)
    {
        flag=*p1;
        *p1=*p2;
        *p2=flag;
    }
}

int main()
{
    int a,b,c;
    while(scanf("%d%d%d",&a,&b,&c)!=EOF)
    {
        swap(&a,&b);  //&表示地址
        swap(&a,&c);
        swap(&b,&c);
        printf("%d %d %d\n",a,b,c);
    }
    return 0;
} 

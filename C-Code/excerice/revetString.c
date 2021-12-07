#include<stdio.h>
#include<string.h>   //用来调用strlen(str)函数 
int main()
{
    int i,n;
    char str[85];
    while(gets(str)!=NULL)
    {
        n=strlen(str);    //记录字符串的长度 
        for(i=n-1;i>=0;i--)
            printf("%c",str[i]);
        printf("\n");
    }
    return 0;
}
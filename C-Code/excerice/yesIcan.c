#include<stdio.h>
int main()
{
    char a[10];
    while(gets(a)!=NULL)
    {
        printf("I am ");
        printf("%s,yes,I can!",a);
    }
    return 0;
}
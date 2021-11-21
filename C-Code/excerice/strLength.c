#include<stdio.h>
int length(char*s)
{
    int count;
    while(*s!='\0')
    {
        s++;
        count++;
    }
    return count;
} 
 
int main()
{
     char s[80];
     while(gets(s)!=NULL)
     {
         int t;
         t=length(s);
         printf("%d\n",t);
     }
     return 0;
}
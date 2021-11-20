#include<stdio.h>
int main()
{
    int i;
    char a[85];
    while(gets(a)!=NULL)
    {
        for(i=0;a[i]!='\0';i++)
        if('A'<=a[i]&&a[i]<='Z')
        a[i]='Z'-a[i]+'A';
        puts(a);
    }
return 0;
}

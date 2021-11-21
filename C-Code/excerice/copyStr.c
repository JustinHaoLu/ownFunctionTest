#include <stdio.h>
#include <string.h>
int main()
{
    void copystr(char *,char *,int);
    int n;
    char str1[81],str2[81];
    while(scanf("%d",&n)!=EOF)
    {
        gets(str1);
        if(strlen(str1)>=n)
        {
            copystr(str1,str2,n);
            printf("%s\n",str2);
        }
    }
    return 0;
}

void copystr(char *p1,char *p2,int n)
{
    p1=p1+n;
    while(*p1!='\0')
    {
        *p2=*p1;
        p1++;
        p2++;
    }
    *p2='\0';
}


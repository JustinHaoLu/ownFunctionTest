#include<stdio.h>
int main()
{
	int strcmp(char *str1,char *str2);
    char a[81],b[81];
    while(gets(a)!=NULL)
    {
        gets(b);
        printf("%d\n",strcmp(a,b));
    }
    return 0;
}
int strcmp(char *str1,char *str2)
{
    if(str1!=NULL&&str2!=NULL)
    {
        while(*str1++ !='\0' && *str2++ !='\0')
        {
            if(*str1>*str2) 
                return 1;
            else if(*str1<*str2) 
                return -1;
            else 
                continue;
        }
        if((*str1 == '\0') && (*str2 == '\0')) 
            return 0; 
        else if((*str1 == '\0') && (*str2 != '\0')) 
            return -1;
        else 
            return 0;
    }
}
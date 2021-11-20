#include<stdio.h>
#include<ctype.h>//调用isalpha函数 
int main()
{
    int n;
    char a[55];
    while(scanf("%d%*c",&n)!=EOF)
    {
        while(n--)
        {
            int d=1;
            gets(a);
            if(a[0]!='_'&& !isalpha(a[0]))   //isalpha函数用来判断字符是否为英文字母 
            {
                printf("no\n");
            }
            else
            {
                for(int j=1;a[j]!='\0';j++)
                {
                    if(a[j]!='_'&&!isalnum(a[j]))
                    {
                        
                        d=0;
                        break;
                    }
                }
                puts(d ? "yes" : "no");      
            }        
        }
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int n;
    char x[100];
    while(scanf("%d%*c",&n)!=EOF)
    {
        while(n--)
        {
            int a=0,b=0,c=0,d=0,e=0;
            gets(x);
            for(int i=0;x[i]!='\0';i++)
            {
                switch(x[i])    
                {
                    case 'a': a++;break;
                    case 'e': b++;break;
                    case 'i': c++;break;
                    case 'o': d++;break;
                    case 'u': e++;break;
                }
            }
            printf("a:%d\ne:%d\ni:%d\no:%d\nu:%d\n\n",a,b,c,d,e);
        }
        
    }
    return 0;
}

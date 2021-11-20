#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    while(gets(a)!=NULL)
    {
        int k=a[0];
        for(int i=1;a[i]!='\0';i++)
        {
            if(a[i]>k){
                k=a[i];
            }
        }
        
        for(int i=0;a[i]!='\0';i++)
        {
            printf("%c",a[i]);
            if(k==a[i])
            {
                printf("(max)");
            }
        }
        printf("\n");
    }
    return 0;
}

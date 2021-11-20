

#include<stdio.h>
#include<string.h>
int main(){
    char str[105];
    while(gets(str)!=NULL){
        int a=0,b=0,c=0,d=0;
        for(int i=0;str[i]!='\0';i++){
            if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z')){
                a++;
            }
            else if(str[i]>='0'&&str[i]<='9'){
                b++;
            }
            else if(str[i]==' '){
                c++;
            }
            else{
                d++;
            }
        }
        printf("%d %d %d %d\n",a,b,c,d);
    }
    return 0;
}
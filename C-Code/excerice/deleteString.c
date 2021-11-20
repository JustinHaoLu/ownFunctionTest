#include<stdio.h>
#include<string.h>
int main(){
    char ch1[100];
    while(gets(ch1)!=NULL){
        char c;
        scanf("%c",&c);    
        getchar();
        for(int i=0;ch1[i]!='\0';i++){
            if(ch1[i]==c){
                for(int j=i;ch1[j]!='\0';j++){
                    ch1[j]=ch1[j+1];
                }
                i--;
            }
        }
        puts(ch1);
    }
    return 0;
}
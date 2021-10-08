//This function can judge whether the input year is leap year or common year.
#include <stdio.h>
#include <string.h>

int main(){
    int year;
    scanf("%d",&year);
    if(year%400 == 0){
        printf("Yes");
    }
    else{
        if(year > 0 && year%4 == 0 && year%100 != 0){
            printf("Yes");
        }
        else{
            printf("No");
        }
    }
    
    return 0;
}
//This function can calculate the divided number of ten input numbers.
#include <stdio.h>

int main(){
    int i, arr[10];
    float average,sum = 0;
    for(i = 0;i < 10;i++){
        scanf("%d",&arr[i]);
        sum += arr[i];
    }
    average = sum / 10;
    printf("ave=%.1f",average);
    return 0;
}
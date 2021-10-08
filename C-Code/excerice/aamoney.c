/**
 * This is a algorithm that can caculate the average number of input. 
 */
#include <stdio.h>
#include <math.h>

int main(){
    int number;
    float ave, all, arr[1000];
    scanf("%d\n",&number);
    for(int i = 0;i < number;i++){
        scanf("%f",&arr[i]);
        all += arr[i];
    }
    ave = all/number;
    printf("%.2f\n",ave);
    return 0;
}
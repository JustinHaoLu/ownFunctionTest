#include <stdio.h>
#include <math.h>

int main(){
    float fahr, celsius;
    printf("Input the degree Fahrenheit:\n");
    scanf("%f",&fahr);
    celsius = 5.0*(fahr - 32)/9;
    printf("fahr=%.6f,celsius=%.6f",fahr,celsius);
    return 0;
}
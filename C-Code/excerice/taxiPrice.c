#include<stdio.h>

int main(){
    float s, price = 10, base = 0, medium = 3, max = 5;
    scanf("%f",&s);
    if(s>base&&s<=medium)
        printf("%.2f\n",price);
    if(s>medium&&s<=max){
        price += (s - 3)*1.8;
        printf("%.2f\n",price);
    }
    if(s > max){
        price += (5 - 3)*1.8 + (s - 5)*2.7;
        printf("%.2f\n",price);
    }
    return 0;
}
/**
 *this is a algorithm that can count the area of a column.   
 */

#include <stdio.h>
#include <math.h>

int main(){
    float r, h;
    scanf("%f %f",&r,&h);
    float rr = pow(r, 2);
    const double pi=4.0 * atan(1.0);
    printf("%.3f\n", 2 * pi * rr + 2 * pi * r * h);
    return 0;
    
}
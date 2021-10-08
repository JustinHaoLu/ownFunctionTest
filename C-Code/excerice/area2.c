#include <stdio.h>
#include <math.h>

float main(){
    float x, y, z;
    scanf("%f,%f,%f",&x,&y,&z);
    printf("%.2f\n", (x + y) * z / 2);
    return 0;
}
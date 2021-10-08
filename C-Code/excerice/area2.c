/**
 * this is a algorithm that can do "(x + y) * z / 2" work.
*/

#include <stdio.h>
#include <math.h>

int main(){
    float x, y, z;
    scanf("%f,%f,%f",&x,&y,&z);
    printf("%.2f\n", (x + y) * z / 2);
    return 0;
}
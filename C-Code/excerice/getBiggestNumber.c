#include<stdio.h>
#include<math.h>
double max(double x, double y, double s)
{
    int z;
    if(x > y)
        z = x;
    else
        z = y;
    if(z > s)
        return z;
    else
        z = s;
    if(x < 0 && y < 0 && s < 0){
        if(abs(x) > abs(y))
            z = y;
        else
            z = x;
        if(abs(z) > abs(s))
            z = s;
        else
            return z;
    }
    return z;
}

int main()
{
    double max( double x,double y, double s);
    double res, a, b, s;
    while (scanf("%lf %lf %lf", &a, &b, &s) != EOF)
    {
        res = max(a, b, s);
        printf("%.0lf\n",res);
    }
    return 0;
}
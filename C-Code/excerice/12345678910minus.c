    #include <stdio.h>
    #include <math.h>

    double inv(double x);

    int main()
    {
        double sum = 0, i;
        for(i = 1;i < 11;i++)
        {
            sum = sum + inv(i);
        }
        printf("%.6f\n",sum);
    }

    double inv(double x)
    {
        if(x - 1 == 0)
            return 1;
        else
            return x = x * inv(x - 1);
    }
#include<stdio.h>
 
int main()
{
    int T, n, i, a[50];    //前两项先赋值
    while(scanf("%d",&T) != EOF)
    {
        a[0] = 0;
        a[1] = 1;
        a[2] = 1;
        for(i=3; i <= 45; i++)
            a[i] = a[i-1] + a[i-2];
        while (T--)
        {
            scanf("%d",&n);
            printf("%d\n",a[n]);
        }
    }
    return 0;
}
/**
 * @brief 
 * #include<iostream>
    using namespace std;
    int main()
    {
        int t,n,i,a[50],sum;
        while(cin>>t)
        {
            a[0]=0;a[1]=1;a[2]=1;
            for(i=3;i<=45;i++)
                a[i]=a[i-1]+a[i-2];
            while(t--)
            {
                cin>>n;
                cout<<a[n]<<endl;
            }
        }
        return 0;
    }
 */
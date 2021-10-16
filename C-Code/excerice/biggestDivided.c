//This function can calculate the biggest numnber of divided.
#include<stdio.h>
int main()
{
    int m, n, temp, i;
    scanf("%d,%d", &m, &n);
    if(m<n)  /*比较大小，使得m中存储大数，n中存储小数*/
    { /*交换m和n的值*/
        temp = m;
        m = n;
        n = temp;
    }
    for(i=n; i>0; i--)  /*按照从大到小的顺序寻找满足条件的自然数*/
        if(m % i == 0 && n % i == 0)
        {/*输出满足条件的自然数并结束循环*/
            printf("%d\n",i);
            break;
        }
   
    return 0;
}


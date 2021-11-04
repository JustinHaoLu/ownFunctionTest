/** This algorithm has the function that it can calculate the total peaches before monkey eat them.
 * 猴子吃桃问题。猴子第一天摘下若干个桃子，当即吃了一半，还不过瘾，又多吃了一个。
 * 第二天早上又将剩下的桃子吃掉一半，又多吃了一个。以后每天早上都吃了前一天剩下的一半零一个。
 * 到第n天早上想再吃时，见只剩下一个桃子了。编写一个程序，求第一天共摘多少桃子。
 */

#include <stdio.h>
#include <string.h>
int main()
{
    float x1, x2, day1;         /*定义 day、x1、x2 3 个变量为基本整型*/
    while(scanf("%f",&day1) != EOF)
    {
        x2 = 1;                 /*输入最后一天还剩下的桃子树*/
        while(day1 > 1)
        {
            x1 = (x2 + 1) * 2;        /*第一天的桃子数是第二天桃子数加1后的2倍*/
            x2 = x1;
            day1--;           /*因为从后向前推所以天数递减*/
        }
        printf("%2.0f\n",x1);      /* 输出桃子的总数*/
    }
    return 0;
}
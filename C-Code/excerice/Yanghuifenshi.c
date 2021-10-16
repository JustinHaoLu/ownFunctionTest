//This function can calculate the number:2/1 + 3/2 + 5/3 + ...
#include<stdio.h>
int main()
{
    int i = 2;      //分子初始为2
    int j = 1;      //分母初始为1
    int k = 0;      //循环n次的变量
    int tmp = 0;    //保存分子的临时变量
    int n;          //输入的要计算的次数
    float sum = 0;  // 求和
    scanf("%d",&n);
    for(k = 0;k < n;k++) //循环20次
    {
        sum = sum + (float)i/j; //开始累加
        tmp = j;                //存放分子临时变量
        j = i;                  //分母的值等于上次分子的值
        i += tmp;               //分子的值为上次分子和分母的和
    }
    printf("s=%.2f\n", sum);    //打印和
    return 0;
}
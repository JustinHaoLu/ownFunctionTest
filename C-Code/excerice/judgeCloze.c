//This function can judge whether the input number is cloze number.完数的判断程序。
#include<stdio.h>
int main()
{
    int i, s = 0, n;                     /*变量i控制选定数范围，j控制除数范围，s记录累加因子之和*/
    scanf("%d", &n);                    /* n的值由键盘输入*/
    for(i = 1;i < n;i++){
        if(n % i == 0){
            s += i;
        }
    }
    if(s == n){
        printf("%d is cloze.\n", n);
    }
    else{
        printf("%d is not cloze.\n",n);
    }
    return 0;
}


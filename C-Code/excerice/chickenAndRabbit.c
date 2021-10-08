//This function can calculate the number of rabbit and chicken.
#include <stdio.h>
int main() {
    int a, b, n, m;
    scanf("%d %d",&n,&m);
    a = (4 * n - m) / 2;    //算出鸡的数量
    b = n - a;              //算出兔的数量
    if (a <= 0 || b <= 0){
    //结果小于等于0，答案不成立，无解
        printf("No");
    }else{
        //结果大于0
        printf("%d %d", a, b);
    }
    return 0;
}
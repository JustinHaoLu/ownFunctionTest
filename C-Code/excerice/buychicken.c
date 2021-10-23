/**
 * 中国古代数学家张丘建在他的《算经》中提出了一个著名的“百钱买百鸡问题”:
 * 鸡翁一，值钱五，鸡母一，值钱三，鸡雏三，值钱一，百钱买百鸡，问翁、母、雏各几何？ 
 */
#include <stdio.h>

int main(){
    int cock, hen, chicken;                     //define parameter:cock, hen and chicken.
    for(cock = 0;cock <= 20;cock++)
    for(hen = 0;hen <= 33;hen++)
    for(chicken = 3;chicken <= 99;chicken++)
    if(cock * 5 + hen * 3 + chicken / 3 == 100)
    if(cock + hen + chicken == 100)
    if(chicken % 3 == 0)
    printf("You have bought %d cock, %d hen and %d chicken\n",cock, hen, chicken);
    return 0;
}
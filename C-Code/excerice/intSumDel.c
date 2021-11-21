#include<stdio.h>
int main()
{
    void sumDiff(int op1,int op2,int *psum,int *pdiff);
    int psum,pdiff;
    int op1,op2;
    while(scanf("%d%d",&op1,&op2)!=EOF){
        sumDiff(op1,op2,&psum,&pdiff);
        printf("sum=%d diff=%d\n",psum,pdiff);
    }
    return 0;
}

void sumDiff(int op1,int op2,int *psum,int *pdiff)
{
    *psum=op1+op2;
    *pdiff=op1-op2;
}

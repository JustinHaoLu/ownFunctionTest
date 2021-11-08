#include<stdio.h>
int main(){
    int n,a[20];
    while(scanf("%d",&n)!=EOF){
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);      //将数据赋值到数组对应位置，数组大小为n - 1
        }
        int m,t,sign=1;
        scanf("%d",&m);             //输入要删除的数m
        for(int i=0;i<n;i++){       //查找该数字
            if(m==a[i]){
                t=i;                //如果找到，标记该位置，即t = i;令符号位为0表示找打，1表示未找到
                sign=0;
                break;
            }
        }
        if(sign){                   //sign为1的时候，表示为找到，则原先的数组全部输出
            for(int i=0;i<n-1;i++){
                printf("%d ",a[i]); //每个输出的数字后面都带一个空格
            }
            printf("%d\n",a[n-1]);  //输出最后一个数字的时候带上换行符
        }
        else{                       //否则即sign为0的时候，表示已找到，则先输出标志位t之前的所有数据；在输出表示为t之后的所有数据
            for(int i=0;i<t;i++){
                printf("%d ",a[i]);
            }
            for(int j=t+1;j<n-1;j++){
                printf("%d ",a[j]);
            }
            printf("%d\n",a[n-1]);
        }
    }
    return 0;
}
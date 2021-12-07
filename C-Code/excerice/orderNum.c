#include <stdio.h>

void sortInc(int *array, int len){
    int i, j, tmp;
    for(i = 0;i < len - 1;i++){
        for(j = 0;j < len - i;j++){
            if(array[j] > array[j + 1]){
                tmp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = tmp;
            }
        }
    }
    for(int y = 0;y < len;y++){
        if(y>=0 && y < len - 1){
            printf("%d ",array[y]);
        }
        if(y == len - 1)
            printf("%d\n",array[y]);
    }
}
int main(){
    int a[100],b[100],len;
    scanf("%d",&a);
    for(int j = 1;j < a;j++){
        scanf("%d",&a[j]);
    }
    len = a[0];
    for(int i = 0;i < len;i++){
        b[i] = a[i + 1];
    }
    sortInc(b,len);
    return 0;
}
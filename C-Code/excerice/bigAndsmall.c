//This function can calculate the biggest number and the smallest number of input.
#include <stdio.h>

int main(){
    int i, j, n, temp, arr[100];
    scanf("%d",&n);
    for(i = 0;i < n;i++){
        scanf("%d",&arr[i]);
    }
    for(i = 0;i < n - 1;i++){
        for(j = 0;j < n - 1 - i;j++){
            if(arr[j] < arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("max=%d, min=%d",arr[0],arr[n -1]);
    return 0;
}
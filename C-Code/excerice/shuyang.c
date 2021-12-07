#include<stdio.h>

int main(){
    int a, b, i, j, sum = 0;
    scanf("%d %d",&a,&b);
    int arr[a];
    for(i = 0;i < a;i++){
        scanf("%d",&arr[i]);
    }
    for(i = 0;i < a;i++){
        if(arr[i + 1] - arr[i] == 1){
            for(j = 0;j < a;j++){
                sum += arr[j];
            }
        }
    }
    printf("%d\n",sum);
    return 0;
}
/**
 * This is a function that can order the input numbers,order by descending.
*/
#include <stdio.h>
int main(){
	int i, j, number, arr[100], tmp;
    scanf("%d\n",&number);
    for(i = 0;i < number;i++){
        scanf("%d",&arr[i]);
    }
    for(i = 0;i < number - 1;i++){
        for(j = 0;j < number - 1 - i;j++){
            if(arr[j] < arr[j + 1]){
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
	for(i = 0;i < number; i++){
        printf("%d\x20", arr[i]);
    }
	return 0;
}

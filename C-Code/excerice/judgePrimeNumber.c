/**
 * This function can judge whether the number is prime number or not.
 * And the reason to judge it is that:
 * 素数又称质数。所谓素数是指除了 1 和它本身以外，不能被任何整数整除的数
 * 例如17就是素数，因为它不能被 2~16 的任一整数整除。
 */
#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
 
int prime(int n)
{
	int i;
	if (n < 2) {
		printf("No\n");
	}
	else {
		for (i = 2; i < n; i++) {   //判断n在2~n-1中有没有因数
			if (n % i == 0)         //如果有可以除尽的数,则非素数
				break;
		}
		if (i < n) {                //存在2~n-1之间有因数
			printf("No\n");
		}
		else
			printf("Yes\n");
 
			
	}
	return 0;
}
 
int main() {
	int n;
	while(scanf("%d",&n) != EOF){
        prime(n);
    }
	return 0;
	
}
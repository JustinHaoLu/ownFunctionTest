#include<stdio.h>
#include<math.h>
int main(){
	double factorial(int);
	int n=1;
	double x,s=0;
	scanf("%lf",&x);
	while(pow(x,n)/factorial(n)>=1e-5){
		s=s+pow(x,n)/factorial(n);
		n++; 
	}
	printf("%.3lf\n",s);
}
double factorial(int a){//定义一个求阶乘的方法 
	double s=1;
	for(int i=1;i<=a;i++){
		s=s*i;
	}
	return s;
}

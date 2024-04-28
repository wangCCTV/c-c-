#include <stdio.h>
int fibonacci(int n){
	if(n<=2){
		return 1;}
	else{
		return fibonacci(n-1)+fibonacci(n-2);}
	}
int main(){
	int n;
	printf("输入斐波那契数列位数：");
	scanf("%d",&n);
	fibonacci(n);
	printf("%d",fibonacci(n));
	return 0;
}


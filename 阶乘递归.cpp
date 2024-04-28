#include <stdio.h>
int jc(int n){
if(n==1||n==0){
	return 1;}
else{
	return n*jc(n-1);}
}
int main(){
	int n;
	printf("½×³ËÊı£º");
	scanf("%d",&n);
	jc(n);
	printf("%d",jc(n));
	return 0;
}

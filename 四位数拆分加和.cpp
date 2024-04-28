#include <stdio.h>
int he(int a)
{
	if(a<=9){
	return a;
	}
	else{
	return he(a/10)+a%10;
	}
}
int main(){
int a;
scanf("%d",&a);
he(a);
printf("%d",he(a));
return 0;
}

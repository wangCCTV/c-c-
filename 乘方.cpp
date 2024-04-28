#include <stdio.h>
int cf(int a,int k){
	if(k==0){
		return 1;}
	else{
		return a*cf(a,k-1);
	}
}
int main()
{
	int n,k;
	scanf("%d£¬%d",&n,&k);
	cf(n,k);
	printf("%d",cf(n,k));
	return 0;
}

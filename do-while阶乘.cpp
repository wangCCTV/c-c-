#include <stdio.h>
int main()
{
		int product=1;
	int n;
	printf("请输入您要求的阶乘：");
	scanf("%d",&n);
	if(n!=0)
	{
	  do
	 {
		product=product*n;
		n--;
	 }
	  while(n>0); 
		printf("%d",product);
		}
	  else
	 {printf("1");}
	return 0;
}

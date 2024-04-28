#include <stdio.h>
int main()
{
	int a=1;
	int b=1;
	int c,i,n;
	printf("请输入您要求到的多少位数：");
	scanf("%d",&n);
	printf("1 1 ");
    for(i=1;i<n-2;i++)
	{
		c=a+b;
		a=b;
		b=c;
		printf("%d ",b);
	}
	return 0;
}

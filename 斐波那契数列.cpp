#include <stdio.h>
int main()
{
	int a=1;
	int b=1;
	int i=1;
	int c,n;
	
	printf("��������Ҫ�󵽵Ķ���λ����");
	scanf("%d",&n);
	printf("1 1 ");
	while(i<=n-2)
	{
		c=a+b;
		a=b;
		b=c;
		printf("%d ",b);
		i++;
	}
	return 0;
}

#include <stdio.h>
int main()
{
	int a,b;
	printf("������һ�����֣�"); 
	scanf("%d",&a) ;
	for(b=0;a;)
	{
		b=a%10;
		a=a/10;
	printf("%d",b);
	}
	return 0;
 } 

#include <stdio.h>
int main()
{
	int product=1;
	int n;
	printf("��������Ҫ��Ľ׳ˣ�");
	scanf("%d",&n);
	if(n!=0)
  {
	while(n>0)
	{
		product=product*n;
		n--;
	}
	printf("%d",product);
  }
  else
  {printf("1");}
	return 0;
 } 

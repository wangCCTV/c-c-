#include <stdio.h> 
int main()
{
	int i,j,k,n;
	printf("�������������������");
	scanf("%d",&n);
  {
	for(i=1;i<=(n+1)/2;i++)
	{
		for(j=1;j<=n-i;j++)
		{printf(" ");}
		{
			for(k=1;k<=2*i-1;k++)
			{printf("*");}
			 printf("\n");
		}
	}
	for(i=(n-1)/2;i>0;i--)
	{
		for(j=n-i;j>0;j--)
		{printf(" ");}
		{
			for(k=2*i-1;k>0;k--)
			{printf("*");}
			 printf("\n");
		}
	}
  }
	return 0;
} 

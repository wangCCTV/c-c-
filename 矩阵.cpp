#include <stdio.h>
int main()
{
	int i,j,n=0,I,J;
	printf(" ‰»ÎI£¨J£∫");
    scanf("%d %d",&I,&J);
	for(i=1;i<=J;i++)

	{
		for(j=1;j<=J;j++)
		{printf("%d\t",i*j);}
		if(n%5==0)
		{printf("\n");}
		
	}
	return 0;
}

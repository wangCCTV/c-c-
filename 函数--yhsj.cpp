#include <stdio.h>
int yhsj(int n)
{
	int i,j,k;
	for(i=1;i<=n;i++){
		for(j=1;j<=n-i;j++)
		{printf(" ");}{
			for(k=1;k<=2*i-1;k++)
			{printf("$");}
			printf("\n");
		}
	}
}
int main()
{
	int m;
	printf("ÊäÈëÐÐÊým:");
	scanf("%d",&m);
    yhsj(m);
	return 0;
}

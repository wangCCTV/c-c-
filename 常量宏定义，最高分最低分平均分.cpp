#include <stdio.h>
#define N 5
int main()
{
	int i,j,t,average,sum=0;
	int a[N];
	printf("请输入需要排序的十个数：");
	for(i=0;i<N;i++)
	{
	 scanf("%d,",&a[i]);
	 sum=sum+a[i];
	 printf("\n");
    }
	for(i=0;i<N;i++)
		for(j=i+1;j<N;j++)
		{
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}	
		}
	printf("%d\n%d\n%d",a[0],a[4],sum/N);	
    printf("\n");
    return 0;
}

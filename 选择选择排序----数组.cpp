#include <stdio.h>
int main()
{
	int i,j,t;
	int a[10];
	printf("请输入需要排序的十个数：");
	for(i=0;i<=9;i++)
	{
	 scanf("%d,",&a[i]);
	 printf("\n");
	}
	for(i=0;i<=9;i++)
		for(j=i+1;j<=9;j++)
		{
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}	
		}
	printf("输出排序后的数列："); 
	for(i=0;i<=9;i++)
   {
	printf("%d ",a[i]);
   }	
    printf("\n");
	return 0;  
}

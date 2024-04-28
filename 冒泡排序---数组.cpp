#include <stdio.h>
int main()
{
	int i,j,t;
	int a[10];
	printf("请输入需要排序的十个数：");
	for(i=0;i<10;i++)
   {
	 scanf("%d,",&a[i]);
	 printf("\n");
   }
   for(i=0;i<10;i++)
     for(j=0;j<10-i;j++)
     {
     	if(a[j]>a[j+1])
     	 {
     	 	t=a[j];
     	 	a[j]=a[j+1];
     	 	a[j+1]=t;
		  }
	 }
	printf("输出排序后的数列："); 
	for(i=0;i<10;i++)
	printf("%d ",a[i]);
	printf("\n");
	return 0;
}

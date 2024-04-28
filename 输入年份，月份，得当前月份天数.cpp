#include <stdio.h>
int main()
{
	int mouth,year;
	printf("请输入当前年份：");
	scanf("%d",&year);
	printf("请输入当前月份：");
	scanf("%d",&mouth) ;
	switch(mouth)
	{
		case 1:printf("该月有31天");break;
		case 2:if( (year%400==0) || year%4==0 && (year%100!=0) )
		       {printf("该月有29天");break;} 
		       else
			   {printf("该月有28天");break;} 
		case 3:printf("该月有31天");break;
		case 4:printf("该月有30天");break;
		case 5:printf("该月有31天");break;
		case 6:printf("该月有30天");break;
		case 7:printf("该月有31天");break;
		case 8:printf("该月有31天");break;
		case 9:printf("该月有30天");break;
		case 10:printf("该月有31天");break;
		case 11:printf("该月有30天");break;
		case 12:printf("该月有31天");break;
	}
	return 0;
 } 

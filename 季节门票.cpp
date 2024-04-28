#include <stdio.h>
int main()
{
	int age,money,mouth,q;
	printf("当前季节："); 
	scanf("%d",&mouth);
	if(mouth==1||mouth==2||mouth==3||mouth==4||mouth==5||mouth==6)
	{
		printf("请输入游客年龄：");
		scanf("%d",&age);
		printf("输入当前季节门票价格：");
		scanf("%d",&q);
		if(age<=6)
		money=q/2;
		{printf("%d",money");}
        else
        {
        	if(age>=60)
        	money=0
        	{printf("请支付0元");}
			else
			{printf("请支付50元");} 
		}
	}
	else
	if(mouth==7||mouth==8||mouth==9||mouth==10||mouth==11||mouth==12)
	{
		printf("请输入游客年龄：");
		scanf("%d",&age);
		printf("输入当前季节门票价格：");
		scanf("%d",&money);
		if(age<=6)
		money=q/2; 
		{printf("%d",money");}
        else
        {
        	if(age>=60)
        	money=0;
        	{printf("%d",money");}
			else
			{printf("%d",money");} 
		}
	}
	printf("请使用微信或支付宝支付\n");
	return 0;
}
	 

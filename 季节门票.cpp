#include <stdio.h>
int main()
{
	int age,money,mouth,q;
	printf("��ǰ���ڣ�"); 
	scanf("%d",&mouth);
	if(mouth==1||mouth==2||mouth==3||mouth==4||mouth==5||mouth==6)
	{
		printf("�������ο����䣺");
		scanf("%d",&age);
		printf("���뵱ǰ������Ʊ�۸�");
		scanf("%d",&q);
		if(age<=6)
		money=q/2;
		{printf("%d",money");}
        else
        {
        	if(age>=60)
        	money=0
        	{printf("��֧��0Ԫ");}
			else
			{printf("��֧��50Ԫ");} 
		}
	}
	else
	if(mouth==7||mouth==8||mouth==9||mouth==10||mouth==11||mouth==12)
	{
		printf("�������ο����䣺");
		scanf("%d",&age);
		printf("���뵱ǰ������Ʊ�۸�");
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
	printf("��ʹ��΢�Ż�֧����֧��\n");
	return 0;
}
	 

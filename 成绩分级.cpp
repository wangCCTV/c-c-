#include <stdio.h>
int main()
{
	int achievement;
	printf("����������ɼ�:");
	scanf("%d",&achievement);
	if(achievement>100)
	{printf("����������淶����������");}
	else
	switch((int)(achievement/10))
	{
	case 0:
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:printf("������");break;
	case 6:
	case 7:printf("����");break;
	case 8:printf("����");break;
	case 9:
	case 10:printf("����");break; 
    }
    return 0;
 } 
 

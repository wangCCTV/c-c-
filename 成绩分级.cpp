#include <stdio.h>
int main()
{
	int achievement;
	printf("请输入该生成绩:");
	scanf("%d",&achievement);
	if(achievement>100)
	{printf("操作错误，请规范操作！！！");}
	else
	switch((int)(achievement/10))
	{
	case 0:
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:printf("不及格");break;
	case 6:
	case 7:printf("及格");break;
	case 8:printf("良好");break;
	case 9:
	case 10:printf("优秀");break; 
    }
    return 0;
 } 
 

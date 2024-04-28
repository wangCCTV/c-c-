#include <stdio.h>
int main()
{
	float a,b,result;
	char sign;
	scanf("%f",&a);
	scanf("%s",&sign);
	scanf("%f",&b);
	switch(sign)
	{
	  case'+':printf("%f + %f = %f",a,b,a+b);break;
	  case'-':printf("%d - %d = %d",a,b,a-b);break;
	  case'*':printf("%f * %f = %f",a,b,a*b);break;
	  case'/':if(b==0)
	          {printf("分母不可为零！！！");break;}
	          else
	          {printf("%f / %f = %f",a,b,a/b);break;}
	   default:printf("错误");
	}
	return 0;
 } 

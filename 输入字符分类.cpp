#include <stdio.h>
int main()
{
	char c;
	int dletters=0,xletters=0,space=0,digit=0,other=0;
	printf("������һ���ַ���");
	while((c=getchar())!='\n')
      {     if(c>='a' && c<='z')
            {xletters++;}
      		else if(c>='A' && c<='Z')
      		{dletters++;}
      		else if(c==' ')	
			{space++;}
			else if(c>='0'&&c<='9')	  
			{digit++;}
			else 
			{other++;}
	  }
	  printf("Сд��ĸ:%d\n��д��ĸ��%d\n�ո�%d\n���֣�%d\n������%d\n",xletters,dletters,space,digit,other);
	  return 0;
}


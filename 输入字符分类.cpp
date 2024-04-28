#include <stdio.h>
int main()
{
	char c;
	int dletters=0,xletters=0,space=0,digit=0,other=0;
	printf("ÇëÊäÈëÒ»´®×Ö·û£º");
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
	  printf("Ð¡Ð´×ÖÄ¸:%d\n´óÐ´×ÖÄ¸£º%d\n¿Õ¸ñ£º%d\nÊý×Ö£º%d\nÆäËû£º%d\n",xletters,dletters,space,digit,other);
	  return 0;
}


#include <stdio.h>
int main()
{
	char str[100];
	int i,num=1;
	gets(str);
	for(i=0;(str[i]!='\0');i++)
	  if(str[i]==' ')
	  {
	  	num++;
	  }
	  printf("%d",num);
}

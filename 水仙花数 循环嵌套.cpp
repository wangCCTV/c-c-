#include <stdio.h>
int main()
{
	int g,s,b;
	int i=100;
	{
		for(b=1;b<=9;b++)
		{
			for(s=0;s<=9;s++)
			{
				for(g=0;g<=9;g++)
				{
					
					if(i==g*g*g+s*s*s+b*b*b)
					{printf("%d\n",i);}
					i++;
					
				}
			}
		}
	}
	return 0;
}

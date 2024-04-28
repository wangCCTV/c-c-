#include <stdio.h>
#include <math.h>
int main()
{
	int i,g,s,b;
	for(i=100;i<1000;i++)
	{
	    b=i%10;
	    s=i/10%10;
	    g=i/10/10%10;
	    if(i==b*b*b+s*s*s+g*g*g)
	    {printf("%d\n",i);}
	}
	return 0;
}

#include <stdio.h>
jc (int n) 
{ 
	int j=1;
 for (int i=1;i<=n;i++)
 {
 	j=j*i;
}
  return j;
}
jch (int n)
{	
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum = jc(i)+sum;
}
return sum;
}
jchh (int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum = jch(i)+sum;
}
return sum;
}
int main(){
	int n;
	printf("��������Ҫ�׳˵�����"); 
	scanf("%d",&n);
	printf("%d",jchh(n));
	return 0;
}


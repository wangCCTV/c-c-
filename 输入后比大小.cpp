#include <stdio.h>
int main()
{
    int a,b,c,max;
    printf("请输入三个整数：");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
    max=a;
    else
    max=b;
    if(a>c)
    max=a;
    else
    max=c;
    if(b>c)
    max=b;
    else
    max=c;
    printf("%d",max);
    return 0; 

}

#include <stdio.h>
int x=1;
void move(char a,char c,int n){
	printf("��%d��,��%d��,��%c���ƶ���%c��\n",x++,n,a,c);
}
void hnt(char a,char b,char c,int n){
    if(n==1){
    	move(a,c,n);
	}
    if(n>1){
	hnt(a,c,b,n-1);
	move(a,c,n);
	hnt(b,a,c,n-1);
	}
}
int main()
{
   int n;
   printf("����������������");
   scanf("%d",&n);
   hnt('a','b','c',n);
   return 0;
}


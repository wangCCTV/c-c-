#include <stdio.h>
#include <string.h>
struct{
	int xh;
	char name[20];
	int  count;
}list[3]={1,"wang",0,2,"li",0,3,"zhang",0},t;
int main(){
	int i,j;
	char list_name[20];{
	for(i=0;i<10;i++)
	  scanf("%s",&list_name);
	  for(j=0;j<3;j++)
	  if(strcmp(list_name,list[j].name)==0)list[j].count++;}
	for(i=0;i<3;i++)
	  for(j=0;j<3-i;j++)
	  if(list[j].count<list[j+1].count){
	  t=list[j];
	  list[j+1]=list[j];
	  list[j+1]=t;
	  }
	  for(i=0;i<3;i++)
	  printf("%d %s %d\n",list[i].xh,list[i].name,list[i].count);
	  return 0;
}

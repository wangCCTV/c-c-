#include <stdio.h>
int main()
{
	int i,j,k,t,max,min,sum,Maver;
	float average;
	int stu[10][9]={{55,46,73,94,83,66},{53,88,83,56,62,76},{88,74,82,99,71,48},{58,79,81,92,70,43},{82,74,83,89,47,71},{56,77,67,83,84,85},{89,46,45,59,91,61},{61,43,91,98,99,88},{73,67,41,83,73,87},{62,47,41,64,41,69}};
	{
		printf("  大学英语  大学数学  大学政治  C语言  信息技术  网络技术   最低分   最高分   平均分");
		printf("\n") ;
	   for(i=0;i<10;i++)
	 {
	      max=stu[i][0];
	   	  for(j=0;j<6;j++)
	   	{
	   		if(stu[i][j]>max)
	   		{
	   			max=stu[i][j];
			}
		}
		   stu[i][7]=max;
	   	   min=stu[i][0];
	       for(j=0;j<6;j++)
	   	 {
	   		if(stu[i][j]<min)
	   		{
	   			min=stu[i][j];
			}
		 }
		   stu[i][6]=min;
	     {
		  for(j=0;j<6;j++)
	      sum+=stu[i][j];
		 }
		  average=sum / 6;
		  sum=0;
		  stu[i][8]=average;
     }
     for(i=0;i<10;i++)
	   {
       for(j=0;j<9;j++)
       printf("%9d",stu[i][j]);
	   printf("\n");
       }
       Maver=stu[0][8];
       for(i=0;i<10;i++)
       {
       	if(stu[i][8]>Maver)
       	Maver=stu[i][8];
	   }
	   printf("最大平均数：%d",Maver);
	   printf("\n");
	   {
	    for(i=0;i<10;i++)
	     {
	     	if(Maver==stu[i][8])
	 	    printf("坐标为(%d,8)",i);
	     }
	   }
	   return 0;
	}
}


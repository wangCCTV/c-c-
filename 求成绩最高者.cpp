#include <stdio.h>
int main(){
	struct stu{
		long int xh;
		char name[20];
		char sex;
		int  cj;
	}stu1={1001,"张三",'M',488},stu2={1002,"李四",'M',499};
    printf("输出成绩最高者：");
	if(stu1.cj>stu2.cj) {printf("%ld %s %c %d",stu1.xh,stu1.name,stu1.sex,stu1.cj);}
	else if(stu1.cj<stu2.cj){printf("%ld %s %c %d",stu2.xh,stu2.name,stu2.sex,stu2.cj);}
	else{
		printf("%ld %s %c %d",stu1.xh,stu1.name,stu1.sex,stu1.cj);
		printf("%ld %s %c %d",stu2.xh,stu2.name,stu2.sex,stu2.cj);
	}
	return 0;
}

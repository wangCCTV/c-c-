#include <stdio.h>
int main(){
	struct stu{
		long int xh;
		char name[20];
		char sex;
		int  cj;
	}stu1={1001,"����",'M',488},stu2={1002,"����",'M',499};
    printf("����ɼ�����ߣ�");
	if(stu1.cj>stu2.cj) {printf("%ld %s %c %d",stu1.xh,stu1.name,stu1.sex,stu1.cj);}
	else if(stu1.cj<stu2.cj){printf("%ld %s %c %d",stu2.xh,stu2.name,stu2.sex,stu2.cj);}
	else{
		printf("%ld %s %c %d",stu1.xh,stu1.name,stu1.sex,stu1.cj);
		printf("%ld %s %c %d",stu2.xh,stu2.name,stu2.sex,stu2.cj);
	}
	return 0;
}

//输入成绩，分等级
#include<stdio.h>
int main(void)
{
	float score;
	printf("请输入您的成绩：");
	scanf("%f",&score);
	if(score>=90 && score<=100)//不能写成90<=score<=100
		printf("A!\n");
	else if(score>=80 && score<90)
		printf("B!\n");
	else if(score>=70 && score<80)
		printf("C!\n");
	else if(score>=60 && score<70)
		printf("D！\n");
	else
		printf("E!\n");
	return 0;
}
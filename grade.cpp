//����ɼ����ֵȼ�
#include<stdio.h>
int main(void)
{
	float score;
	printf("���������ĳɼ���");
	scanf("%f",&score);
	if(score>=90 && score<=100)//����д��90<=score<=100
		printf("A!\n");
	else if(score>=80 && score<90)
		printf("B!\n");
	else if(score>=70 && score<80)
		printf("C!\n");
	else if(score>=60 && score<70)
		printf("D��\n");
	else
		printf("E!\n");
	return 0;
}
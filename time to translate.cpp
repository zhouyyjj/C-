//������תΪ��������
#include<stdio.h>
#define SEC_PER_MIN//1����60��
int main(void)
{
	int sec,min,left;
	printf("������second:");
	scanf("%d",&sec);
	while(sec>0)
	{
		min=sec/SEC_PER_MIN;
		left=sec%SEC_PER_MIN;
		printf��"%d %d",min, left��;
	}
	return 0;
}
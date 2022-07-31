//把秒数转为分钟与秒
#include<stdio.h>
#define SEC_PER_MIN//1分钟60秒
int main(void)
{
	int sec,min,left;
	printf("请输入second:");
	scanf("%d",&sec);
	while(sec>0)
	{
		min=sec/SEC_PER_MIN;
		left=sec%SEC_PER_MIN;
		printf（"%d %d",min, left）;
	}
	return 0;
}
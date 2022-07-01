//求1到100之间奇数的个数
#include<stdio.h>
int main(void)
{
	int i;
	int cnt=0;
	for(i=0;i<=100;i++)
	{
		if(i%2==1)
			++cnt;
	}
	printf("奇数个数为%d\n",cnt);
	return 0;
}
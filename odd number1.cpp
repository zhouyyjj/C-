//求1到100之间的奇数之和
#include<stdio.h>
int main(void)
{
	int i;
	int sum=0;
	for(i=0;i<=100;i++)
	{
		if(i%2==1)
			sum=sum+i;
	}
	printf("sum=%d\n",sum);
	return 0;
}
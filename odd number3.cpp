//求1到100之间奇数的平均值
#include<stdio.h>
int main(void)
{
	int i;
	int sum=0;
	int cnt=0;
	float avg;
	for(i=1;i<=100;i++)
	{
		if(i%2==1)
		{
			sum=sum+i;
			cnt++;
		}//注意：if只管一个语句，所以if后面内容要加{}
	}
	avg=1.0*sum/cnt;
	printf("sum=%d\n",sum);
	printf("cnt=%d\n",cnt);
	printf("avg=%.2f\n",avg);
	return 0;
}
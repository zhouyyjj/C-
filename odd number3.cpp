//��1��100֮��������ƽ��ֵ
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
		}//ע�⣺ifֻ��һ����䣬����if��������Ҫ��{}
	}
	avg=1.0*sum/cnt;
	printf("sum=%d\n",sum);
	printf("cnt=%d\n",cnt);
	printf("avg=%.2f\n",avg);
	return 0;
}
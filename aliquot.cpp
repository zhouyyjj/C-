//(for和if的嵌套)被3整除
#include<stdio.h>
int main(void)
{
	int i;
	int sum=0;
	for(i=3;i<10;i++)
	{
		if(i%3==0)//如果i被3整除
			sum=sum+i;
		printf("sum=%d\n",sum);
	}
	return 0;
}
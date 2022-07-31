//银行的年利率为2.95%，如果在银行中存入10000元，一年后可以取出多少钱
#include<stdio.h>
int main()
{
	int i=10000;
	float m=0.00295;
	float money;
	money=i+i*m;
	printf("可以取出的钱为%f\n",money);
	return 0;
}
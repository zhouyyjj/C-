//输入一个数，判断它是否为素数
#include<stdio.h>
int main(void)
{
	int i,j;
	printf("请输入一个数：");
	scanf("%d",&i);
	for(j=2;j<=i;j++)
	{
		if(i%j==0)
			break;
	}
	if(j<i)
		printf("%d不是素数\n",i);
	else
		printf("%d是素数\n",i);
	return 0;
}

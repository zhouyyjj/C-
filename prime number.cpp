//����һ�������ж����Ƿ�Ϊ����
#include<stdio.h>
int main(void)
{
	int i,j;
	printf("������һ������");
	scanf("%d",&i);
	for(j=2;j<=i;j++)
	{
		if(i%j==0)
			break;
	}
	if(j<i)
		printf("%d��������\n",i);
	else
		printf("%d������\n",i);
	return 0;
}

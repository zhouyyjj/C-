//��1��100֮�������ĸ���
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
	printf("��������Ϊ%d\n",cnt);
	return 0;
}
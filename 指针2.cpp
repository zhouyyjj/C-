//����ָ���д��������������������һ��swap���������������������н���
#include<stdio.h>
int swap(int*a,int*b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
	return 0;
}
int main()
{
	int x=1;
	int y=9;
	swap(&x,&y);
	printf("x=%d,y=%d\n",x,y);
	return 0;
}
//用指针比较两个数的大小
#include<stdio.h>
int main()
{
	int a,b;
	int* p;
	int* q;
	scanf("%d,%d",&a,&b);
	if(a>b)
	{
		p=&a;
		q=&b;
		printf("%d>%d\n",*p,*q);
	}
	else if(a<b)
	{
		p=&b;
		q=&a;
		printf("%d>%d\n",*p,*q);
	}
}
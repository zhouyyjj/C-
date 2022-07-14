//输出变量地址，定义一个变量，以十六进制格式输出变量的地址
#include<stdio.h>
int main(void)
{
	int a;
	int *p;
	printf("请输入一个数：");
	scanf("%d",&a);
	p=&a;//将地址赋值给指针变量
	printf("%x\n",*p);
	return 0;
}
//先定义再赋值
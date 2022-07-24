//用指针输出某一书柜信息
#include<stdio.h>
struct Book
{
	char name[20];
	int number;
	char serial[20];
};
int main()
{
	struct Book book={"english",3,"123-456"};
	struct Book*pstruct;//定义结构体类型指针
	pstruct=&book;
	printf("the book's informantion\n");
	printf("图书的名字：%s\n",(*pstruct).name);
	printf("书架序号：%d\n",(*pstruct).number);
	printf("书架编号：%s\n",(*pstruct).serial);
	return 0;
}
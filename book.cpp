//��ָ�����ĳһ�����Ϣ
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
	struct Book*pstruct;//����ṹ������ָ��
	pstruct=&book;
	printf("the book's informantion\n");
	printf("ͼ������֣�%s\n",(*pstruct).name);
	printf("�����ţ�%d\n",(*pstruct).number);
	printf("��ܱ�ţ�%s\n",(*pstruct).serial);
	return 0;
}
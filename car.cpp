//����һ����ʾ�����Ľṹ��
#include<stdio.h>
#include<string.h>
struct Car
{
	char name[60];
	char color[20];
	float length;
	int seniority;
};
int main()
{
	struct Car car;
	strcpy(car.name,"·��");
	strcpy(car.color,"��ɫ");
	car.length=4.85f;
	car.seniority=5;
	printf("��������%s\n",car.name);
	printf("������ɫ��%s\n",car.color);
	printf("���ĳ�����%.2f��\n",car.length);
	printf("������%d��\n",car.seniority);
	return 0;
}

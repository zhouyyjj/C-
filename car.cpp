//定义一个表示汽车的结构体
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
	strcpy(car.name,"路虎");
	strcpy(car.color,"黑色");
	car.length=4.85f;
	car.seniority=5;
	printf("车牌名是%s\n",car.name);
	printf("车的颜色是%s\n",car.color);
	printf("车的长度是%.2f米\n",car.length);
	printf("可载人%d人\n",car.seniority);
	return 0;
}

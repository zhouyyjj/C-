//1英寸相当于2.54厘米，输入身高（英寸），输出以厘米为单位的身高
#include<stdio.h>
int main()
{
	float inch;
	float cm;
	printf("输入一个身高（英寸）：");
	scanf("%f",&inch);
	printf("%.2f\n",inch*2.54);
	return 0;
}
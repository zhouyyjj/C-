#include<stdio.h>
#include<math.h>
int main(void)
{
	double a,b,c;
	double x1,x2;
	double delate;
	char ch;
	do
	{
		printf("请输入一元二次方程的三个系数：\n");
		printf("a=");
		scanf("%lf",&a);
		printf("b=");
		scanf("%lf",&b);
		printf("c=");
		scanf("%lf",&c);
		delate=b*b-4*a*c;
		if(delate>0)
		{
			x1=(-b-sqrt(delate))/2*a;
			x2=(-b+sqrt(delate))/2*a;
			printf("有两个实数解,x1=%lf,x2=%lf\n",x1,x2);
		}
		else if(delate=0)
		{
			x1=x2=-b/2*a;
			printf("有一个实数解,x1=x2=%lf\n",x1,x2);
		}
		else
		{
			printf("无实数解！\n");
		}
		printf("如果您想继续，请输入（Y/N）\n");
		scanf(" %c",&ch);//%c之前要加空格
	}while('y'==ch||'Y'==ch);
	return 0;
}
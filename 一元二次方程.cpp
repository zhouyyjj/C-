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
		printf("������һԪ���η��̵�����ϵ����\n");
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
			printf("������ʵ����,x1=%lf,x2=%lf\n",x1,x2);
		}
		else if(delate=0)
		{
			x1=x2=-b/2*a;
			printf("��һ��ʵ����,x1=x2=%lf\n",x1,x2);
		}
		else
		{
			printf("��ʵ���⣡\n");
		}
		printf("�����������������루Y/N��\n");
		scanf(" %c",&ch);//%c֮ǰҪ�ӿո�
	}while('y'==ch||'Y'==ch);
	return 0;
}
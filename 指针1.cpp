//���������ַ������һ����������ʮ�����Ƹ�ʽ��������ĵ�ַ
#include<stdio.h>
int main(void)
{
	int a;
	int *p;
	printf("������һ������");
	scanf("%d",&a);
	p=&a;//����ַ��ֵ��ָ�����
	printf("%x\n",*p);
	return 0;
}
//�ȶ����ٸ�ֵ
#include<stdio.h>
#include<stdlib.h>
struct Clerk
{
	char name[20];
	int iNumber;
	struct Clerk*pNext;
};
int iCount;
struct Clerk*Create()//��������
{
	struct Clerk*pHead=NULL;//��ʼ��ͷָ��Ϊ��
	struct Clerk* pEnd,*pNew;
	int iCount=0;
	pEnd=pNew=(struct Clerk*)malloc(sizeof(struct Clerk));//ǿ��ת������ָ���Խṹ��ķ�ʽ��ֵ��pEnd��pNew
	printf("������Ա�������ֺ͹���\n");
	scanf("%s",&pNew->name);
	scanf("%d",&pNew->iNumber);
	while(pNew->iNumber!=0)
	{
		iCount++;
		if(iCount==1)
		{
			pNew->pNext=pHead;
			pEnd=pNew;
			pHead=pNew;
		}
		else
		{
			pNew->pNext=NULL;
			pEnd->pNext=pNew;
			pEnd=pNew;
	
		}
		pNew=(struct Clerk*)malloc(sizeof(struct Clerk));
		scanf("%s",&pNew->name);
		scanf("%d",&pNew->iNumber);

	}
	free(pNew);
	return pHead;
}
void Print(struct Clerk*pHead)
{
	struct Clerk*pTemp;
	int iIndex=1;
	printf("---the list has %d members:---\n",iCount);
	printf("\n");
	pTemp=pHead;
	while(pTemp!=NULL)
	{
		printf("the NO%d member is:\n",iIndex);
		printf("the name is:%s\n",pTemp->name);
		printf("the number is:%d\n",pTemp->iNumber);
		pTemp=pTemp->pNext;
		iIndex++;
	}
}
int main()
{
	struct Clerk*pHead;
	pHead=Create();
	Print(pHead);
	return 0;
}

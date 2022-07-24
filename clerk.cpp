#include<stdio.h>
#include<stdlib.h>
struct Clerk
{
	char name[20];
	int iNumber;
	struct Clerk*pNext;
};
int iCount;
struct Clerk*Create()//创建链表
{
	struct Clerk*pHead=NULL;//初始化头指针为空
	struct Clerk* pEnd,*pNew;
	int iCount=0;
	pEnd=pNew=(struct Clerk*)malloc(sizeof(struct Clerk));//强制转换，让指针以结构体的方式赋值给pEnd和pNew
	printf("请输入员工的名字和工号\n");
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

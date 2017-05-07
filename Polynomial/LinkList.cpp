#include"LinkList.h"
#include <malloc.h>
#include <stdlib.h>
#include<stdio.h>
#include<string.h>
//��ʼ��������
void InitList(LinkList &L)
{
	L=(LinkList)malloc(sizeof(LNode));  	/*����ͷ���*/
	L->next=NULL;
}
//���ٵ�����
void DestroyList(LinkList &L)
{
	LinkList p=L,q=p->next;
	while (q!=NULL)
	{
		free(p);
		p=q;
		q=p->next;
	}
	free(p);
}
//�жϵ������Ƿ�Ϊ�գ��ձ���1�����򷵻�0
int ListEmpty(LinkList L)
{
	return L->next==NULL;
}
//���ص�����ĳ���
int ListLength(LinkList L)
{
	int i=0;
	LinkList p=L;
	while(p->next!=NULL)
	{
		p=p->next;
		i++;
	}
	return i;
}
//��ӡ����������ÿ��Ԫ��
void DispList(LinkList L)
{
	LinkList p=L->next;
	while (p!=NULL)
	{
		printf("%c",p->data);
		p=p->next;
	}
	printf("\n");
}
//��ȡ������L�е�iԪ�أ��ɲ���e����
int GetElem(LinkList L,int i,ElemType &e)
{
	LinkList p=L->next;
	int j=1;
	while(p&&j<i)
	{
		p=p->next;
		++j;

	}
	if(!p||j>i)
		return ERROR;
	e=p->data;
	return OK;
}
//�ڵ�����L�в�������Ԫ��e��λ�ã��粻���ڷ���0
int LocateElem(LinkList L,ElemType e)
{
	int i=1;
	int Llength=ListLength(L);
	LinkList p=L->next;
	while(memcmp(&p->data,&e,sizeof(e))&&i<=Llength)
	{
		i++;
		p=p->next;
	}
	if(i>Llength)
		return ERROR;
	else
		return i;
}
//�ڵ�����L�е�i��λ���ϲ���Ԫ��e
int ListInsert(LinkList &L,int i,ElemType e)
{
	LinkList p=L;
	int j=0;
	while(p&&j<i-1)
	{
		p=p->next;
		++j;
	}
	if(!p||j>i-1)
		return ERROR;
	LinkList s=(LinkList)malloc(sizeof(LNode));
	s->data=e;
	s->next=p->next;
	p->next=s;
	return OK;

}
//ɾ����i��Ԫ��
int ListDelete(LinkList &L,int i,ElemType &e)
{
	LinkList p=L;
	int j=0;
	while(p->next&&j<i-1)
	{
		p=p->next;
		++j;

	}
	if(!(p->next)||j>i-1)
		return ERROR;
	LinkList q=p->next;
	p->next=q->next;
	e=q->data;
	free(q);
	return OK;
}

//��λ������n��Ԫ�ص�ֵ����������ͷ���ĵ�����L
void CreatList_L(LinkList &L,int n)
{
	//L=(LinkList)malloc(sizeof(LNode));
	//L->next=NULL;
	LinkList p;
	for(int i=n;i>0;--i)
	{	p=(LinkList)malloc(sizeof(LNode));
		scanf("%c",&p->data);
		p->next=L->next;
		L->next=p;
	}

}





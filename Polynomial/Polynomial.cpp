#include "Polynomial.h"
#include<stdlib.h>
#include<stdio.h>
void CreatPolyn(polynomail &P, int m)
{
	InitList(P);
	P->data.coef = 0;
	P->data.expn = -1;

	for (int i = 0; i < m; i++)
	{
		ElemType e;
		scanf("%f%d", &e.coef, &e.expn);
		ListInsert(P, ListLength(P) + 1,e);

	}
}

void PrintPolyn(polynomail P)
{
	LinkList p = P->next;
	while (p ->next!= NULL)
	{
		printf("%fx^%d+", p->data.coef,p->data.expn);
		p = p->next;
	}
	printf("%fx^%d\n", p->data.coef, p->data.expn);

}

void AddPolyn(polynomail & Pa, polynomail & Pb)
{
	LinkList pa, pb,pc;
	pc = Pa;
	pa = Pa->next;
	pb = Pb->next;
	while (pa&&pb)
	{
		if (pa->data.expn < pb->data.expn)
		{
			pc->next = pa;
			pc=pa;
			pa = pa->next;
						
		}
		else if (pa->data.expn == pb->data.expn)
		{
			pa->data.coef += pb->data.coef;
			if (pa->data.coef == 0.0)
			{
				LinkList t = pa;
				pa = pa->next;
				free(t);
			}
			else
			{
				pc->next = pa;
				pc = pa;
				pa = pa->next;
			}
			LinkList t = pb;
			pb = pb->next;
			free(t);
		}
		else
		{
			pc->next = pb;
			pc = pb;
			pb = pb->next;
		}
	}
	pc->next = pa ? pa : pb;
	free(Pb);
}

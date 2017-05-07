#include "Polynomial.h"
#include<stdlib.h>
#include<stdio.h>
int main()
{
	polynomail P1,P2;
	int m;
	printf("输入多项式P1的项数:");
	scanf("%d", &m);
	printf("输入多项式P1系数和指数:\n");
	CreatPolyn(P1, m);
	PrintPolyn(P1);
	printf("输入多项式P2的项数:");
	scanf("%d", &m);
	printf("输入多项式P2系数和指数:\n");
	CreatPolyn(P2, m);
	PrintPolyn(P2);
	printf("P1+P2=\n");
	AddPolyn(P1, P2);
	PrintPolyn(P1);
	system("pause");
	return 0;
}
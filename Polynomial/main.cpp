#include "Polynomial.h"
#include<stdlib.h>
#include<stdio.h>
int main()
{
	polynomail P1,P2;
	int m;
	printf("�������ʽP1������:");
	scanf("%d", &m);
	printf("�������ʽP1ϵ����ָ��:\n");
	CreatPolyn(P1, m);
	PrintPolyn(P1);
	printf("�������ʽP2������:");
	scanf("%d", &m);
	printf("�������ʽP2ϵ����ָ��:\n");
	CreatPolyn(P2, m);
	PrintPolyn(P2);
	printf("P1+P2=\n");
	AddPolyn(P1, P2);
	PrintPolyn(P1);
	system("pause");
	return 0;
}
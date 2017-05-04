#pragma once
#include<iostream>
using namespace std;
#define OK 1
#define ERROR 0
#define INFEASIBLE -1
#define OVERFLOW -2
typedef int Status;
typedef struct BiTNode {
	char data;
	struct BiTNode *lchild, *rchild;
}BiTNode,*BiTree;
class BTree
{
private:
	BiTree T;
	Status CreateBiTree(BiTree &T);
	Status PreOrderTraverse(BiTree T, Status(*visit)(char  e));
	Status InOrderTraverse(BiTree T, Status(*visit)(char e));
	Status PostOrderTraverse(BiTree T, Status(*visit)(char  e));
	
public:
	BTree()
	{
		T = NULL;
	}
	Status CreateBiTree();
	Status PreOrderTraverse(Status(*visit)(char  e));
	Status InOrderTraverse( Status(*visit)(char e));
	Status PostOrderTraverse( Status(*visit)(char  e));
};


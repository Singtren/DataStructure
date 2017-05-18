#include "BinaryTree.h"


Status BTree::CreateBiTree(BiTree & T)
{
	char c;
	cin >> c;
	if (c == '#')
		T = NULL;
	else
	{
		if ((T = new BiTNode) == NULL)
			exit(OVERFLOW);
		else
			T->data = c;
		CreateBiTree(T->lchild);
		CreateBiTree(T->rchild);
	}
	return Status(OK);
}

Status BTree::CreateBiTree()
{
	return CreateBiTree(T);
}
Status BTree::PreOrderTraverse(BiTree T, Status(*visit)(char  e))
{
	if(T==NULL)
		return Status(OK);
	visit(T->data);
	PreOrderTraverse(T->lchild, visit);
	PreOrderTraverse(T->rchild, visit);
	return Status(OK);
}
Status BTree::PreOrderTraverse(Status(*visit)(char e))
{

	
	return PreOrderTraverse(T, visit);
}

Status BTree::InOrderTraverse(BiTree T, Status(*visit)(char e))
{
	if (T != NULL)
	{
		InOrderTraverse(T->lchild, visit);
		visit(T->data);
		InOrderTraverse(T->rchild, visit);
	}

	return Status(0);
}
Status BTree::InOrderTraverse(Status(*visit)(char e))
{
	return InOrderTraverse(T,visit);
}
Status BTree::PostOrderTraverse(BiTree T, Status(*visit)(char e))
{
	if (T != NULL)
	{
		PostOrderTraverse(T->lchild, visit);
		PostOrderTraverse(T->rchild, visit);
		visit(T->data);
	}
	return Status(0);
}
Status BTree::NestPare(BiTree T)
{
	if (T != NULL)
	{
		cout << T->data;
		if (T->lchild != NULL || T->lchild != NULL)
		{
			cout << "(";
			NestPare(T->lchild);
			cout << ",";
			NestPare(T->rchild);
			cout << ")";
		}
	}
	return 0;
}
BiTNode * BTree::GetNode(BiTree T, char Value)
{
	BiTree t;
	if (T != NULL)
	{
		if (T->data == Value)
			t = T;
		else if ((t = GetNode(T->lchild, Value)) == NULL)
			t = GetNode(T->rchild, Value);
	}
	else
		t = NULL;
	return t;
}
int BTree::Depth(BiTree T)
{
	if (T != NULL)
	{
		int l, r;
		l = Depth(T->lchild);
		r = Depth(T->rchild);
		return (l > r ? l : r)+1;
	}
		else
	return 0;
}
int BTree::Leaf(BiTree T)
{
	if (T != NULL)
	{
		if (T->lchild == NULL&&T->rchild == NULL)
			return 1;
		else return Leaf(T->lchild) + Leaf(T->rchild);
	}
	else
	return 0;
}
Status BTree::PostOrderTraverse( Status(*visit)(char e))
{
	return PostOrderTraverse(T, visit);
}

Status BTree::NestPare()
{
	return NestPare(T);
}

BiTNode * BTree::GetNode(char Value)
{
	
	return GetNode(T,Value);
}

int BTree::Depth()
{

	return Depth(T);
}

int BTree::Leaf()
{
	return Leaf(T);
}

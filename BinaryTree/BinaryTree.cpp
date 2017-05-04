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
	return Status();
}
Status BTree::InOrderTraverse(Status(*visit)(char e))
{
	return Status();
}
Status BTree::PostOrderTraverse(BiTree T, Status(*visit)(char e))
{
	return Status();
}
Status BTree::PostOrderTraverse( Status(*visit)(char e))
{
	return Status();
}

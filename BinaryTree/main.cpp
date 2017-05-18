#include "BinaryTree.h"
Status visit(char e)
{
	cout << e;
	return Status(OK);
}
int main()
{
	class BTree bt;
	bt.CreateBiTree();
	bt.PreOrderTraverse(visit);
	cout << endl;
	BiTNode *btnode = bt.GetNode('D');
	cout << btnode->lchild->data;
	cout << btnode->rchild->data;
	cout << endl;
	cout << bt.Depth();
	cout << bt.Leaf();
	system("pause");
	return 0;
}
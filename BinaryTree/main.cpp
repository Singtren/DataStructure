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
	system("pause");
	return 0;
}
#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define INFEASIBLE -1
#define OVERFLOW -2
typedef struct {
	float coef;
	int expn;
}term, ElemType;
typedef int Status;
typedef struct LNode	/*定义单链表结点类型*/
{
	ElemType data;
    struct LNode *next;
}LNode,*LinkList;
void InitList(LinkList &L);
void DestroyList(LinkList &L);
int ListEmpty(LinkList L);
int ListLength(LinkList L);
void DispList(LinkList L);
int GetElem(LinkList L,int i,ElemType &e);
int LocateElem(LinkList L,ElemType e);
int ListInsert(LinkList &L,int i,ElemType e);
int ListDelete(LinkList &L,int i,ElemType &e);
void CreatList_L(LinkList &L,int n);

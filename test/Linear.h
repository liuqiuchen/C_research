// 单链表的类型定义
typedef struct node
{
	int data; // 数据域
	struct node *next; // 指针域
}Node, *LinkList;

// 双向循环链表的类型定义
struct dbnode
{
	int data;
	struct dbnode *prior, *next;
}
typedef struct dbnode *dbpointer;
typedef dbpointer DLinkList;
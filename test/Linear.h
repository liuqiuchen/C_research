// ����������Ͷ���
typedef struct node
{
	int data; // ������
	struct node *next; // ָ����
}Node, *LinkList;

// ˫��ѭ����������Ͷ���
struct dbnode
{
	int data;
	struct dbnode *prior, *next;
}
typedef struct dbnode *dbpointer;
typedef dbpointer DLinkList;
// ������������Ͷ���
typedef struct btnode
{
	int data;
	struct btnode *lchild, *rchild;
}*BinTree;

// ������������Ͷ���
typedef struct ttnode
{
	int data;
	struct ttnode *lchild, *parent, *rchild;
}*TBinTree;
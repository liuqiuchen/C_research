
// ������������Ͷ���
typedef struct btnode
{
	int key;
	struct btnode *lchild, *rchild; // ָ�����Һ��ӵ�ָ��
}*BinTree,BSTNode;

// ������������Ͷ���
typedef struct ttnode
{
	int key;
	struct ttnode *lchild, *parent, *rchild;
}*TBinTree;



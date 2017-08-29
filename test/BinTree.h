// 二叉链表的类型定义
typedef struct btnode
{
	int data;
	struct btnode *lchild, *rchild;
}*BinTree;

// 三叉链表的类型定义
typedef struct ttnode
{
	int data;
	struct ttnode *lchild, *parent, *rchild;
}*TBinTree;
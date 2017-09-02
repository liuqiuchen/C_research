
// 二叉链表的类型定义
typedef struct btnode
{
	int key;
	struct btnode *lchild, *rchild; // 指向左右孩子的指针
}*BinTree,BSTNode;

// 三叉链表的类型定义
typedef struct ttnode
{
	int key;
	struct ttnode *lchild, *parent, *rchild;
}*TBinTree;



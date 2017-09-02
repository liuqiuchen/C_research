#include <stdio.h>
#include "BinTree.h"

// 二叉排序树的查找算法

/*
// 二叉链表的类型定义
typedef struct btnode
{
    int key;
    struct btnode *lchild, *rchild; // 指向左右孩子的指针
}*BinTree, BSTNode;

// 三叉链表的类型定义
typedef struct ttnode
{
    int data;
    struct ttnode *lchild, *parent, *rchild;
}*TBinTree;
*/

/*
在根指针所指的二叉排序树上递归地查找键值等于key的节点。
若成功，则返回指向该节点的指针，否则返回空指针。
*/
/*
BinTree SearchBST(BinTree bst, int key)
{
	if(bst == NULL) return NULL;
	else if(key == bst->key) return bst;
	else if(key < bst->key) return SearchBST(bst->lchild, key);
	else return SearchBST(bst->rchild, key);
}
*/

// 二叉排序树的节点插入方法
/*
在二叉排序树上进行插入的原则是：必须要保证插入一个新节点后，仍为一棵
二叉排序树。这个节点是查找不成功时查找路径上访问的最后一个节点的左孩子
或右孩子。
*/

/*
在根指针所指的二叉排序树上递归地查找键值等于key的节点。
若成功，则返回指向该节点的指针，否则返回空指针。
指针f为查找节点的双亲，初始值为NULL
*/
BinTree SearchBST(BinTree bst, int key, BSTNode *f)
{
	if(bst == NULL) return NULL;
	else if(key == bst->key) return bst;
	else if(key < bst->key) return SearchBST(bst->lchild, key, bst);
	else return SearchBST(bst->rchild, key, bst);
}

// 若根指针bst所指的二叉排序树上无键值为key的节点，
// 则插入这个节点，并返回1，否则返回0.
int InsertBST(BinTree bst, int key)
{
	BSTNode *p, *t, *f;
	f = NULL;
	t = SearchBST(bst, key, f);

	// 查找不成功时插入新节点
	if(t==NULL)
	{
		p = malloc(sizeof(btnode));
		p->key = key;
		p->lchild = NULL;
		p->rchild = NULL;
		// 如果查找节点的双亲不存在，被插入节点为新的根节点
		if(f == NULL) bst = p;
		else if(key < f->key) f->lchild = p;
		else f->rchild = p;

		return 1;
	}
	else // 查找成功时不用插入
		return 0;
}
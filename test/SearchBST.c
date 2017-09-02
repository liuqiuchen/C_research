#include <stdio.h>
#include "BinTree.h"

// �����������Ĳ����㷨

/*
// ������������Ͷ���
typedef struct btnode
{
    int key;
    struct btnode *lchild, *rchild; // ָ�����Һ��ӵ�ָ��
}*BinTree, BSTNode;

// ������������Ͷ���
typedef struct ttnode
{
    int data;
    struct ttnode *lchild, *parent, *rchild;
}*TBinTree;
*/

/*
�ڸ�ָ����ָ�Ķ����������ϵݹ�ز��Ҽ�ֵ����key�Ľڵ㡣
���ɹ����򷵻�ָ��ýڵ��ָ�룬���򷵻ؿ�ָ�롣
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

// �����������Ľڵ���뷽��
/*
�ڶ����������Ͻ��в����ԭ���ǣ�����Ҫ��֤����һ���½ڵ����Ϊһ��
����������������ڵ��ǲ��Ҳ��ɹ�ʱ����·���Ϸ��ʵ����һ���ڵ������
���Һ��ӡ�
*/

/*
�ڸ�ָ����ָ�Ķ����������ϵݹ�ز��Ҽ�ֵ����key�Ľڵ㡣
���ɹ����򷵻�ָ��ýڵ��ָ�룬���򷵻ؿ�ָ�롣
ָ��fΪ���ҽڵ��˫�ף���ʼֵΪNULL
*/
BinTree SearchBST(BinTree bst, int key, BSTNode *f)
{
	if(bst == NULL) return NULL;
	else if(key == bst->key) return bst;
	else if(key < bst->key) return SearchBST(bst->lchild, key, bst);
	else return SearchBST(bst->rchild, key, bst);
}

// ����ָ��bst��ָ�Ķ������������޼�ֵΪkey�Ľڵ㣬
// ���������ڵ㣬������1�����򷵻�0.
int InsertBST(BinTree bst, int key)
{
	BSTNode *p, *t, *f;
	f = NULL;
	t = SearchBST(bst, key, f);

	// ���Ҳ��ɹ�ʱ�����½ڵ�
	if(t==NULL)
	{
		p = malloc(sizeof(btnode));
		p->key = key;
		p->lchild = NULL;
		p->rchild = NULL;
		// ������ҽڵ��˫�ײ����ڣ�������ڵ�Ϊ�µĸ��ڵ�
		if(f == NULL) bst = p;
		else if(key < f->key) f->lchild = p;
		else f->rchild = p;

		return 1;
	}
	else // ���ҳɹ�ʱ���ò���
		return 0;
}
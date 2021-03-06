#include "RecordType.h"
/*#define N 10

typedef struct
{
	int key; // 键值
	int otheritem;
}RecordType;

// N 为序列中待排记录的总数，第0个记录可以闲置或者作为岗哨。
typedef RecordType List[N+1];*/

// 筛选法建堆
void Shif(List R, int k, int m)
{
	/*
	假设R[k], R[k+1], ..., R[m]是以R[k]为根的完全二叉树，
	R[k]的左右子树均满足堆的性质。本算法调整R[k]，使整个序列
	R[k], R[k+1], ...,R[m]满足堆的性质
	*/
	int i,j,x;
	RecordType t;
	i = k;j = 2*i;
	x=R[k].key;
	t=R[k];

	while(j <= m)
	{
		// 左孩子键值大于右孩子键值
		if((j < m)&&(R[j].key > R[j+1].key))
			// 若存在右子树，且右子树根的关键字小，则沿右分支筛选
			j++;
		if(x < R[j].key) break; // 筛选完毕
		else 
		{
			R[i] = R[j];i=j;j=2*i;
		}
	}
	// 填入恰当位置
	R[i]=t;
}
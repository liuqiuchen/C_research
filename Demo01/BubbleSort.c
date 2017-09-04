#include "RecordType.h"

/*
#define N 10

typedef struct
{
	int key; // 键值
	int otheritem;
}RecordType;

// N 为序列中待排记录的总数，第0个记录可以闲置或者作为岗哨。
typedef RecordType List[N+1];
*/

// 冒泡排序
// 当在一趟起泡过程中没有进行记录交换的操作时，整个排序过程终止
void BubbleSort(List R, int n)
{
	int i,j,endsort;
	RecordType temp;
	for(i = 1;i <= n - 1;i++)
	{
		endsort = 0;	// 将整型变量endsort置为0
		for(j = 1;j <= n-i-1;j++)
		{
			if(R[j].key > R[j+1].key)
			{
			
				temp = R[j];
				R[j] = R[j + 1];
				R[j + 1] = temp;
				endsort = 1;
			}
		}
		if(endsort == 0) break;
	}
}
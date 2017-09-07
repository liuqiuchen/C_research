#include "RecordType.h"

/*#define N 10

typedef struct
{
	int key; // 键值
	int otheritem;
}RecordType;

// N 为序列中待排记录的总数，第0个记录可以闲置或者作为岗哨。
typedef RecordType List[N+1];*/

// 直接选择排序
/*void SelectSort(List R, int n)
{
	int min,i,j;
	for(i = 1;i <= n - 1;i++)
	{
		// 假设第i个记录键值最小
		min = i;
		for(j = i + 1;j <= n;j++)
		{
			// 记录键值较小记录的下标
			if(R[j].key < R[min].key) min = j;
		}
		//将最小键值记录第i个记录交换
		if(min != i) swap(R[min], R[i])	
	}
}*/









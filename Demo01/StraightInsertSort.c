#include "RecordType.h"
// 直接插入排序

void StraightInsertSort(List R, int n)
{
	int i,j;

	// n为表长，从第二个记录起进行插入
	for(i = 2;i <= n;i++)
	{
		R[0] = R[i];
		j = i - 1;
		while(R[0].key < R[j].key)  // 与岗哨进行比较，直至键值不大于岗哨
		{
			R[j + 1] = R[j];
			j--;
		}
		R[j + 1] = R[0];
	}
}
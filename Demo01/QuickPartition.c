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

// 一趟快速排序
int QuickPartition(List R, int low, int high)
// 对R[low],R[low + 1],...,R[high]子序列进行一趟快速排序
{
	RecordType x;
	x = R[low];
	while(low < high)
	{
		while((low < high) && (R[high].key >= x.key)) high--;
		R[low] = R[high]; // 比x键值小的记录移到低端
		while((low < high) && (R[low].key <= x.key)) low++;
		R[high] = R[low]; // 比x键值大的记录移动到高端
	}
	R[low] = x; // 一趟快速排序结束，将x移到其最终位置
	return low;
}

// 完整的快速排序
void QuickSort(List R, int low, int high)
{
	int temp;
	if(low < high)
	{
		temp = QuickPartition(R, low, high);
		QuickSort(R,low, temp - 1);
		QuickSort(R, temp + 1, high);
	}
}









#include "SqTable.h"

// 二分查找算法

/*
#define Maxsize 20   

// 顺序表

typedef struct
{
	int key; // 关键字
	int otherfield; // 其他域
}TableElem;

typedef struct
{
	TableElem elem[Maxsize+1];
	int n; // 最后一个数据元素的下标
}SqTable;
*/

/*
在有序表T中，
用二分查找法查找键值等于key的元素，
变量low，high分别标记查找区间的下界和上界
*/
int SearchBin(SqTable T, int key)
{
	int low, hign, mid;
	low = 1; high = T.n; // 置查找区间初值
	while(low <= high)
	{
		mid = (low + high)/2;
		if(T.elem[mid].key == key) return mid;
		else if(T.elem[mid].key > key) high = mid - 1; // 在前半区间查找
		else low = mid + 1; // 在后半区间查找
	}
	return 0; // 查找不成功，则返回0
}
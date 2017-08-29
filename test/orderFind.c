#include "SqTable.h"

// 顺序查找算法

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

/**
在顺序表T中，从后往前查找键值等于key的数据元素，若找到，则返回该元素在
T中的位置，否则返回0，标记查找不成功。
*/
int SearchSqTable(SqTable T, int key)
{
	int i;
	T.elem[0].key = key; // 设置岗哨 
	i = T.n;
	while(T.elem[i].key != key)
	{
		i--;
	}
	return i;
}
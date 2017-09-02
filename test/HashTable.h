// 散列表数据元素的类型定义
#define MaxSize 20 // 定义散列表的容量

typedef struct
{
	int key; // 键值域
	int otherfield; // 其他域
}Element;

//typedef Element OpenHash[MaxSize];
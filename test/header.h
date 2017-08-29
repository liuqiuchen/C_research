// 顺序表的结构定义
#define Maxsize 100
//const int Maxsize = 100; // 预先定义一个足够大的常数

typedef struct
{
	int data[Maxsize]; // 存放数组的数组
	int length; // 顺序表的实际长度
}SeqList; // 顺序表类型名为SeqList

// SeqList L 定义L为一个顺序表


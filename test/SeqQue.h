// 顺序队列类型（普通队列和循环队列类型定义都一样，都如下：）
#define maxsize 20
//const int maxsize = 20;

typedef struct seqque
{
	int data[maxsize];
	int front, rear;
}SeqQue;

typedef struct cycque
{
	int data[maxsize];
	int front, rear;
}CycQue;
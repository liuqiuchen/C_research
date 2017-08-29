// 链队列类型定义
typedef struct LinkQueueNode
{
	int data;
	struct LinkQueueNode *next;
}LkQueNode;
typedef struct LkQueue
{
	LkQueNode *front, *rear;
}LkQue;









#include <stdio.h>
#include <malloc.h>
#include "Lkqueue.h"

/*
// 链队列类型定义
typedef struct LinkQueueNode
{
int data;
struct LinkQueueNode *next;
}LkQueNode
typedef struct LkQueue
{
LkQueNode *front, *rear;
}LkQue;
*/

// 1. 队列的初始化
void InitQueue(LkQue *LQ)
{
	LkQueNode *temp;
	temp = (LkQueNode *)malloc(sizeof(LkQueNode));
	LQ->front = temp;
	LQ->rear = temp;
	(LQ->front)->next = NULL;
}

// 2. 判队列空
int EmptyQueue(LkQue LQ)
{
	if (LQ.rear == LQ.front)
		return 1;
	else
		return 0;
}

// 3. 入队列
void EnQueue(LkQue *LQ, int x)
{
	LkQueNode *temp;
	temp = (LkQueNode *)malloc(sizeof(LkQueNode));
	temp->data = x;
	temp->next = NULL;
	(LQ->rear)->next = temp; // 新节点入队列
	LQ->rear = temp; // 置新的队列尾节点

}

// 4. 出队列
int OutQueue(LkQue *LQ)
{
	LkQueNode *temp;
	if (EmptyQueue(*LQ))
	{
		printf("队列为空\n");
		return 0;
	}
	else
	{
		temp = LQ->front->next; // 队列首元素
		(LQ->front)->next = temp->next;

		if (temp->next == NULL)
			LQ->rear = LQ->front; // 无首节点时，front和rear都指向头节点
		free(temp);
		return 1;
	}
}
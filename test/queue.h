#include <stdio.h>
#include <malloc.h>
#include "Lkqueue.h"

/*
// ���������Ͷ���
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

// 1. ���еĳ�ʼ��
void InitQueue(LkQue *LQ)
{
	LkQueNode *temp;
	temp = (LkQueNode *)malloc(sizeof(LkQueNode));
	LQ->front = temp;
	LQ->rear = temp;
	(LQ->front)->next = NULL;
}

// 2. �ж��п�
int EmptyQueue(LkQue LQ)
{
	if (LQ.rear == LQ.front)
		return 1;
	else
		return 0;
}

// 3. �����
void EnQueue(LkQue *LQ, int x)
{
	LkQueNode *temp;
	temp = (LkQueNode *)malloc(sizeof(LkQueNode));
	temp->data = x;
	temp->next = NULL;
	(LQ->rear)->next = temp; // �½ڵ������
	LQ->rear = temp; // ���µĶ���β�ڵ�

}

// 4. ������
int OutQueue(LkQue *LQ)
{
	LkQueNode *temp;
	if (EmptyQueue(*LQ))
	{
		printf("����Ϊ��\n");
		return 0;
	}
	else
	{
		temp = LQ->front->next; // ������Ԫ��
		(LQ->front)->next = temp->next;

		if (temp->next == NULL)
			LQ->rear = LQ->front; // ���׽ڵ�ʱ��front��rear��ָ��ͷ�ڵ�
		free(temp);
		return 1;
	}
}
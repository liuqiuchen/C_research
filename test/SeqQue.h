// ˳��������ͣ���ͨ���к�ѭ���������Ͷ��嶼һ���������£���
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
#define maxsize 6
//const int maxsize = 6;

// 顺序栈

typedef struct seqstack
{
	int data[maxsize];
	int top; // 标志栈顶位置的变量
}SeqStk;
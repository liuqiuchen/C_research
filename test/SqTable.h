#define Maxsize 20   

// ˳���

typedef struct
{
	int key; // �ؼ���
	int otherfield; // ������
}TableElem;

typedef struct
{
	TableElem elem[Maxsize+1];
	int n; // ���һ������Ԫ�ص��±�
}SqTable;


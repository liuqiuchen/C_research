#include "SqTable.h"

// ˳������㷨

/*
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
*/

/**
��˳���T�У��Ӻ���ǰ���Ҽ�ֵ����key������Ԫ�أ����ҵ����򷵻ظ�Ԫ����
T�е�λ�ã����򷵻�0����ǲ��Ҳ��ɹ���
*/
int SearchSqTable(SqTable T, int key)
{
	int i;
	T.elem[0].key = key; // ���ø��� 
	i = T.n;
	while(T.elem[i].key != key)
	{
		i--;
	}
	return i;
}
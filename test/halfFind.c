#include "SqTable.h"

// ���ֲ����㷨

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

/*
�������T�У�
�ö��ֲ��ҷ����Ҽ�ֵ����key��Ԫ�أ�
����low��high�ֱ��ǲ���������½���Ͻ�
*/
int SearchBin(SqTable T, int key)
{
	int low, hign, mid;
	low = 1; high = T.n; // �ò��������ֵ
	while(low <= high)
	{
		mid = (low + high)/2;
		if(T.elem[mid].key == key) return mid;
		else if(T.elem[mid].key > key) high = mid - 1; // ��ǰ���������
		else low = mid + 1; // �ں���������
	}
	return 0; // ���Ҳ��ɹ����򷵻�0
}
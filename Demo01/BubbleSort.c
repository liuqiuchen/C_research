#include "RecordType.h"

/*
#define N 10

typedef struct
{
	int key; // ��ֵ
	int otheritem;
}RecordType;

// N Ϊ�����д��ż�¼����������0����¼�������û�����Ϊ���ڡ�
typedef RecordType List[N+1];
*/

// ð������
// ����һ�����ݹ�����û�н��м�¼�����Ĳ���ʱ���������������ֹ
void BubbleSort(List R, int n)
{
	int i,j,endsort;
	RecordType temp;
	for(i = 1;i <= n - 1;i++)
	{
		endsort = 0;	// �����ͱ���endsort��Ϊ0
		for(j = 1;j <= n-i-1;j++)
		{
			if(R[j].key > R[j+1].key)
			{
			
				temp = R[j];
				R[j] = R[j + 1];
				R[j + 1] = temp;
				endsort = 1;
			}
		}
		if(endsort == 0) break;
	}
}
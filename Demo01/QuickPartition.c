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

// һ�˿�������
int QuickPartition(List R, int low, int high)
// ��R[low],R[low + 1],...,R[high]�����н���һ�˿�������
{
	RecordType x;
	x = R[low];
	while(low < high)
	{
		while((low < high) && (R[high].key >= x.key)) high--;
		R[low] = R[high]; // ��x��ֵС�ļ�¼�Ƶ��Ͷ�
		while((low < high) && (R[low].key <= x.key)) low++;
		R[high] = R[low]; // ��x��ֵ��ļ�¼�ƶ����߶�
	}
	R[low] = x; // һ�˿��������������x�Ƶ�������λ��
	return low;
}

// �����Ŀ�������
void QuickSort(List R, int low, int high)
{
	int temp;
	if(low < high)
	{
		temp = QuickPartition(R, low, high);
		QuickSort(R,low, temp - 1);
		QuickSort(R, temp + 1, high);
	}
}









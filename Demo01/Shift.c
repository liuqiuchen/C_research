#include "RecordType.h"
/*#define N 10

typedef struct
{
	int key; // ��ֵ
	int otheritem;
}RecordType;

// N Ϊ�����д��ż�¼����������0����¼�������û�����Ϊ���ڡ�
typedef RecordType List[N+1];*/

// ɸѡ������
void Shif(List R, int k, int m)
{
	/*
	����R[k], R[k+1], ..., R[m]����R[k]Ϊ������ȫ��������
	R[k]����������������ѵ����ʡ����㷨����R[k]��ʹ��������
	R[k], R[k+1], ...,R[m]����ѵ�����
	*/
	int i,j,x;
	RecordType t;
	i = k;j = 2*i;
	x=R[k].key;
	t=R[k];

	while(j <= m)
	{
		// ���Ӽ�ֵ�����Һ��Ӽ�ֵ
		if((j < m)&&(R[j].key > R[j+1].key))
			// �������������������������Ĺؼ���С�������ҷ�֧ɸѡ
			j++;
		if(x < R[j].key) break; // ɸѡ���
		else 
		{
			R[i] = R[j];i=j;j=2*i;
		}
	}
	// ����ǡ��λ��
	R[i]=t;
}
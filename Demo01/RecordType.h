#define N 10

typedef struct
{
	int key; // ��ֵ
	int otheritem;
}RecordType;

// N Ϊ�����д��ż�¼����������0����¼�������û�����Ϊ���ڡ�
typedef RecordType List[N+1];
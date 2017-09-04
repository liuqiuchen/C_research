#define N 10

typedef struct
{
	int key; // 键值
	int otheritem;
}RecordType;

// N 为序列中待排记录的总数，第0个记录可以闲置或者作为岗哨。
typedef RecordType List[N+1];
#define vnum 20

// �ڽӱ�����Ͷ���

// ����
typedef struct arcnode
{
	int adjvex; // ��һ���ߵĶ�����
	int weight; // Ȩֵ
	struct arcnode *nextarc; // ָ����һ���ڽӵ�
}ArcNode;

// ��ͷ���
typedef struct vexnode
{
	int vextex; // ������
	ArcNode *firstarc; // ָ���һ���ߵ�ָ��
}AdjList[vnum];

typedef struct gp
{
	AdjList adjlist;
	int vexnum, arcnum; // ����ͱ���
}Graph;
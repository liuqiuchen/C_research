#define MAX_INT 32767

typedef struct gp
{
	int vexs[vnum]; // ������Ϣ
	int arcs[vnum][vnum]; // �ڽӾ���
	int vexnum, arcnum; // ������������
}Graph;

struct
{
	int adjvex; // ����
	int lowcost; // ��С����
}closedge[vnum];

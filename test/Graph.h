#define vnum 20
#define MAX_INT = 32767

// �ڽӾ���
typedef struct gp
{
	int vexs[vnum]; // ������Ϣ
	int arcs[vnum][vnum]; // �ڽӾ���
	int vexnum, arcnum; // ������������
}Graph;

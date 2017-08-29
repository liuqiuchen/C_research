#define MAX_INT 32767

typedef struct gp
{
	int vexs[vnum]; // 顶点信息
	int arcs[vnum][vnum]; // 邻接矩阵
	int vexnum, arcnum; // 顶点数，边数
}Graph;

struct
{
	int adjvex; // 顶点
	int lowcost; // 最小代价
}closedge[vnum];

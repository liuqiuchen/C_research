#define vnum 20
#define MAX_INT = 32767

// 邻接矩阵
typedef struct gp
{
	int vexs[vnum]; // 顶点信息
	int arcs[vnum][vnum]; // 邻接矩阵
	int vexnum, arcnum; // 顶点数，边数
}Graph;

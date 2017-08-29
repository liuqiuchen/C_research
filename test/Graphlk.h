#define vnum 20

// 邻接表的类型定义

// 表结点
typedef struct arcnode
{
	int adjvex; // 下一条边的顶点编号
	int weight; // 权值
	struct arcnode *nextarc; // 指向下一个邻接点
}ArcNode;

// 表头结点
typedef struct vexnode
{
	int vextex; // 顶点编号
	ArcNode *firstarc; // 指向第一条边的指针
}AdjList[vnum];

typedef struct gp
{
	AdjList adjlist;
	int vexnum, arcnum; // 顶点和边数
}Graph;
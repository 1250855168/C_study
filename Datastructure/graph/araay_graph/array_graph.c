#include "array_graph.h"

Graph *CreateGraph()
{
    Graph *G = malloc(sizeof(Graph));
    printf("请输入顶点数和边数 用空格隔开：");
    scanf("%d%d", &G->numVertexes, &G->numEdges);
    getchar();

    printf("请输入顶点：\n");
    for (size_t i = 0; i < G->numVertexes; i++)
    {
        scanf("%c", &G->vexs[i]);
    }

    memset(G->adj, 0, sizeof(EdgeType) * MAXVEX * MAXVEX); //初始化边为0

    for (size_t k = 0; k < G->numEdges; k++)
    {
        printf("请输入边 Vi Vj:\n");
        int i, j;
        scanf("%d%d", &i, &j);
        G->adj[i][j] = 1;
        G->adj[j][i] = G->adj[i][j];
    }

    printf("图的初始完成！！\n");
    return G;
}

void PrintGraph(Graph *G)
{
    printf("顶点信息：");
    for (size_t i = 0; i < G->numVertexes; i++) //打印顶点
    {
        printf("%c ", G->vexs[i]);
    }

    printf("邻接矩阵：\n");
    for (size_t i = 0; i < G->numVertexes; i++) //打印图的有效点
    {
        for (size_t j = 0; j < G->numVertexes; j++)
        {
            printf("%-3d", G->adj[i][j]);
        }
        printf("\n");
    }
}
int visited[MAXVEX]; //被访问的结点 如果为1被访问过
void DFSTraverse(Graph *G)
{
    for (size_t i = 0; i < G->numVertexes; i++)
    {
        visited[i] = 0; //将所有顶点都初始化为未访问过
    }

    printf("DFS: ");
    for (size_t i = 0; i < G->numVertexes; i++)
    {
        if (visited[i] == 0) //如果Vi没有访问过 调用DFS
        {
            DFS(G, i);//有可能 有单独结点在0结点上 只能回到0的位置 再次遍历 才能到这个结点
        }
    }
    printf("\n");
}

void DFS(Graph *G, int i)
{
    visited[i] = 1;            //标识被访问过
    printf("%d ", G->vexs[i]); //对它进行操作
    for (size_t j = 0; j < G->numVertexes; j++)
    {
        if (G->adj[i][j] == 1 && visited[j] == 0)
        {
            DFS(G, j); //对未被访问的结点进行递归调用
        }
    }
}
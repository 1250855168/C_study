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
        scanf("%c",&G->vexs[i]);
    }

    memset(G->adj,0,sizeof(EdgeType)*MAXVEX*MAXVEX);//初始化边为0

    for (size_t k = 0; k < G->numEdges; k++)
    {
        printf("请输入边 Vi Vj:\n");
        int i,j;
        scanf("%d%d",&i,&j);
        G->adj[i][j]=1;
        G->adj[j][i]=G->adj[i][j];
    }
    
    printf("图的初始完成！！\n");
    return G;

}

void PrintGraph(Graph *G )
{
    printf("顶点信息：");
    for (size_t i = 0; i < G->numVertexes; i++)//打印顶点
    {
        printf("%c ",G->vexs[i]);
    }
    
    printf("邻接矩阵：\n");
    for (size_t i = 0; i < G->numVertexes; i++)//打印图的有效点
    {
        for (size_t j = 0; j < G->numVertexes; j++)
        {
            printf("%-3d",G->adj[i][j]);
        }
        printf("\n");
    }
}
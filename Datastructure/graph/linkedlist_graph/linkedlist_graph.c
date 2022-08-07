#include "linkedlist_graph.h"

GraphAdjList *createAlGragh()
{

    GraphAdjList *G = malloc(sizeof(GraphAdjList));
    printf("请输入顶点和边数");
    scanf("%d%d", &G->numvertexes, &G->numEdges);
    getchar();

    printf("请输入顶点的信息:\n");
    for (size_t i = 0; i < G->numvertexes; i++)
    {
        scanf("%c", &G->adjList[i].data);
        G->adjList[i].first = NULL;
    }

    printf("建立边表：\n");
    for (size_t i = 0; i < G->numEdges; i++)
    {
        printf("输入(Vi,Vj)上的顶底序号");
        int i, j;
        scanf("%d%d", &i, &j);
        EdgeNode *e = malloc(sizeof(EdgeNode));
        e->adjvex = j;
        e->next = G->adjList[i].first;
        G->adjList[i].first = e;

        //对于无向图，一条对应两个顶点，要分别对i和j进行插入
        EdgeNode *e = malloc(sizeof(EdgeNode));
        e->adjvex = i;
        e->next = G->adjList[j].first;
        G->adjList[i].first = e;
    }
    return G;
}


void PrintALGraph(GraphAdjList *G)
{
    for (size_t i = 0; i < G->numvertexes; i++)
    {
        printf("%c ",G->adjList[i].data);
        EdgeNode *e=G->adjList[i].first;
        while (e!=NULL)
        {
            printf("%d ",e->adjvex);
            e=e->next;
        }
        printf("\n");
    }
    
}
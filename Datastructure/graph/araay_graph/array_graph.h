#ifndef ARRAY_GRAPH_H
#define ARRAY_GRAPH_H

#include<stdio.h>
#include<stdlib.h>
#include <string.h>

typedef char VertexType;//图顶点类型
typedef int EdgeType;//图边的类型
#define MAXVEX 10//图的边和列
#define INFTY 6553//数据的最大值

typedef struct Graph
{
    VertexType vexs[MAXVEX];
    EdgeType adj[MAXVEX][MAXVEX];
    int numVertexes;//顶点的数量
    int numEdges;//边的数量
}Graph;
/**
 * @brief 创建一个图
 * 
 * @return Graph* 
 */
Graph *CreateGraph();
/**
 * @brief 打印一个图
 * 
 * @param G 
 */
void PrintGraph(Graph *G );

#endif
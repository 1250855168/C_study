#ifndef ARRAY_GRAPH_H
#define ARRAY_GRAPH_H

#include<stdio.h>
#include<stdlib.h>
#include <string.h>

typedef char VertexType;
typedef int EdgeType;
#define MAXVEX 10
#define INFTY 6553

typedef struct Graph
{
    VertexType vexs[MAXVEX];
    EdgeType adj[MAXVEX][MAXVEX];
    int numVertexes;
    int numEdges;
}Graph;

Graph *CreateGraph();
void PrintGraph(Graph *G );

#endif
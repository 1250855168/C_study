#ifndef LINKEDLIST_GRAPH_H
#define LINKEDLIST_GRAPH_H


#include<stdio.h>
#include<stdlib.h>

typedef char VertexType;//顶点的数据类型
typedef int EdgeType;//边的数据类型
#define MAXVEX 10

typedef struct EdgeNode//
{
 int adjvex;
//  EdgeType weight;
 struct EdgeNode *next;
}EdgeNode;

typedef struct vertexNode
{
    VertexType data;
    EdgeNode *first;
}vertexNode;

typedef struct GraphAdjList
{
    vertexNode adjList[MAXVEX];
    int numvertexes;
    int numEdges;
}GraphAdjList;

GraphAdjList *createAlGragh();
void PrintGraph(GraphAdjList *G);
#endif
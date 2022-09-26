//
// Created by 33907 on 2022/9/14.
//
#define MAXSIZE 20
typedef char vertexType;
typedef struct edge{
    int adjNode;
    struct edge *nextEdge;
}edge;

typedef struct {
    vertexType data;
    edge *first;
}VNode, VNodeList[MAXSIZE];

typedef struct {
    VNodeList vertexes;
    int vexNum, edgeNum;
}MyGraph;



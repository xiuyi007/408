//
// Created by 33907 on 2022/9/14.
//
#define MAXSIZE 20
typedef struct {
    int data;
    int parent;
}SqTreeNode;

typedef struct {
    SqTreeNode nodes[MAXSIZE];
    int n; //节点个数
}SqTree;

//
// Created by 33907 on 2022/9/14.
//
typedef struct {
    //这里记录了某个节点的孩子链
}childLink;

#define MAXSIZE 20
typedef struct CTreeNode{
    int data;
    childLink *childLink;  //孩子节点链
}CTreeNode;

typedef struct {
    CTreeNode nodes[MAXSIZE];
    int n;
}CTree;

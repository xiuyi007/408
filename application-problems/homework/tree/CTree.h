//
// Created by 33907 on 2022/9/22.
//

#ifndef DS_CTREE_H
#define DS_CTREE_H

#define MAXSIZE 20
typedef struct ChildNode {
    int data;
    struct ChildNode *nextChild;
}ChildNode, *ChildLink;

typedef struct TreeNode {
    int data;
    ChildLink childLink;
}TreeNode;

typedef struct CTree {
    TreeNode nodes[MAXSIZE];
    int n;
}CTree;

#endif //DS_CTREE_H

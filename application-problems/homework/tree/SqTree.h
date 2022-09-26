//
// Created by 33907 on 2022/9/22.
//

#ifndef DS_SQTREE_H
#define DS_SQTREE_H

#define MAXSIZE 20
typedef struct TreeNode {
    int data;
    int parent;
}TreeNode;
typedef struct SqTree {
    TreeNode data[MAXSIZE];
    int n;//节点个数
}SqTree;
#endif //DS_SQTREE_H

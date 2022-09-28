//
// Created by 33907 on 2022/9/22.
//

#ifndef DS_LINKTREE_H
#define DS_LINKTREE_H
typedef struct TreeNode{
    int data;
    //左孩子是子节点，右孩子是兄弟
    struct TreeNode *firstChild, *nextSibling;
}TreeNode, *LinkTree;
#endif //DS_LINKTREE_H

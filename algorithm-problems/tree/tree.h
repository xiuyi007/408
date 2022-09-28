//
// Created by 33907 on 2022/9/25.
//

#ifndef DS_TREE_H
#define DS_TREE_H

#include "iostream"
#include "../queue/queue.h"
#define MAXSIZE 10
//双亲表示法
typedef struct DbpNode {
    int data;
    int parent; //父节点的数组下标
}DbpNode;
typedef struct DbParentTree {
    DbpNode nodes[MAXSIZE];
    int n; //节点个数
};

//二叉树左右孩子节点表示法
typedef struct BiTreeNode {
    int data;
    struct BiTreeNode *left, *right;
}BiTreeNode, *BiTree;

//孩子兄弟表示法
typedef struct CsNode {
    int data;
    struct CsNode *firstChild, *nextSibling;
}CsNode, *CsTree;

//孩子表示法
typedef struct ChildLink {
    //某个节点的孩子链定义。
}ChildLink;
typedef struct CTreeNode {
    int data;
    struct ChildLink *link;
};
typedef struct CTree {
    int n;
    CTreeNode nodes[MAXSIZE];
};

void visit(BiTree T) {
    std::cout << T->data << std::endl;
}

void PreOrder(BiTree T) {
    if (T != NULL) {
        visit(T);
        PreOrder(T->left);
        PreOrder(T->right);
    }
}

void InOrder(BiTree T) {
    if (T!=NULL)
    {
        PreOrder(T->left);
        visit(T);
        PreOrder(T->right);
    }
}

void PostOrder(BiTree T) {
    if (T!=NULL)
    {
        PreOrder(T->left);
        PreOrder(T->right);
        visit(T);
    }
}

//此处懒得图方便就不写一个队列了。这里只是模拟操作，可以理解为伪代码
void enQueue(SqQueue q, BiTree T) {

}
void deQueue(SqQueue q, BiTree T) {

}
void LevelOrder(BiTree T) {
    SqQueue q;
    BiTree p;
    InitQueue(q);
    enQueue(q, T);  //进队
    while (!IsEmpty(q)) {
        deQueue(q, p);
        visit(p);
        if (p->left != NULL)
            enQueue(q, p->left);
        if (p->right != NULL)
            enQueue(q, p->right);
    }
}

#endif //DS_TREE_H

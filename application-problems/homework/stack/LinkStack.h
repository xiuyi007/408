//
// Created by 33907 on 2022/9/22.
//

#ifndef DS_LINKSTACK_H
#define DS_LINKSTACK_H

#include <cstdlib>

typedef struct LinkNode {
    int data;
    struct LinkNode *next;
}LinkNode, *LinkStack;


//入栈(头插）
bool Push(LinkStack s, int &x) {
    LinkNode *p;
    p = (LinkNode *)malloc(sizeof (LinkNode));
    p->data = x;
    p->next = s->next;
    s->next = p;
    return true;
}

//出栈
bool Pop(LinkStack s, int &x) {
    LinkNode *p;
    if (s->next == NULL) return false;
    p = s->next;
    x = p->data;
    s->next = p->next;
    free(p);
    return true;
}

//判空
bool IsEmpty(LinkStack s) {
    if (s->next == NULL) return true;
    return false;
}

//判满
bool IsFull(LinkStack s) {
    //malloc失败可以理解为满了
    return true;
}

#endif //DS_LINKSTACK_H

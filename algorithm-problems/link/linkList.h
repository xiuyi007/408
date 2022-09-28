//
// Created by 33907 on 2022/9/24.
//

#ifndef DS_LINKLIST_H
#define DS_LINKLIST_H

#include <cstdlib>
#include "iostream"

typedef struct linkNode{
    int data;
    struct linkNode *next;
}linkNode, *linkList;

typedef struct dbLinkNode {
    int data;
    struct dbLinkNode *front, *rear;
}dbNode, *dbLinkList;


void printList(linkList l) {
    linkNode *p;
    p = l;
    while(p->next != NULL) {
        std::cout << p->next->data << " ";
        p = p->next;
    }
}
void headInsert(linkList &l) {   // &此处不可省略。坑死爹了
    int x;
    linkNode *node;
    l = (linkList )malloc(sizeof (linkNode));
    l->next = NULL;
    std::cout << "请输入要数据来创建链表，以-999来表示创建结束" << std::endl;
    std::cin >> x;
    while (x != -999) {
        node = (linkNode *) malloc(sizeof (linkNode));
        node->data = x;
        node->next = l->next;
        l->next = node;
        std::cin >> x;
    }


}

void tailInsert(linkList &l) {
    linkNode *p, *node;
    int x;
    l = (linkList) malloc(sizeof (linkNode));
    p = l;
    std::cout << "请输入要数据来创建链表，以-999来表示创建结束" << std::endl;
    std::cin >> x;
    while (x != -999) {
        node = (linkNode *) malloc(sizeof (linkNode));
        node->data = x;
        p->next = node;
        p = node;
        std::cin >> x;
    }
    p->next = NULL;
}

bool delNode(linkList l, int x) {
    linkNode *p = l;
    while (p->next != NULL) {
        if (p->next->data == x){
            linkNode *tmp = p->next;
            p->next = tmp->next;
            free(tmp);
        }
        p = p->next;
    }
    printList(l);
    return false;
}

void testHeadInsert() {
    linkList link;
    headInsert(link);
    printList(link);
}


void testTailInsert() {
    linkList link;
    tailInsert(link);
    printList(link);
}

void testDel() {
    linkList l;
    headInsert(l);
    delNode(l, 2);
}
#endif //DS_LINKLIST_H

#include <cstdlib>
#include <cstdio>

//
// Created by 33907 on 2022/9/14.
//
typedef struct LinkNode {
    int data;
    struct LinkNode *next;
}LinkNode;

typedef struct LinkQueue {
    LinkNode *head, *tail;
}LinkQueue;

void InitQueue(LinkQueue &queue) {
    queue.head = queue.tail = (LinkNode *)malloc(sizeof (LinkNode));;
    queue.head->next = NULL;
}

bool EnQueue(LinkQueue &queue, int &x) {
    LinkNode *p = (LinkNode *) malloc(sizeof (LinkNode));
    p->data = x;
    p->next = NULL;
    queue.tail->next = p;
    queue.tail = p;
    return true;
}

bool DeQueue(LinkQueue &queue, int &x) {
    if (queue.head->next == NULL) return false;   //queue.head == queue.tail 也可以
    LinkNode *p = queue.head->next;
    x = p->data;
    queue.head->next = p->next;
    //别忘了
    if (queue.tail == p)
        queue.tail = queue.head;
    free(p);
    return true;
}

bool isEmpty(LinkQueue &queue) {
    if (queue.head->next == NULL) return true;   //queue.head == queue.tail 也可以
    return false;
}

//int main(){
//    LinkQueue linkQueue;
//    InitQueue(linkQueue);
//    int key = 2;
//    EnQueue(linkQueue, key);
//    key =3;
//    EnQueue(linkQueue, key);
//    int ans;
//    DeQueue(linkQueue, ans);
//    printf("%d", ans);
//    DeQueue(linkQueue, ans);
//    printf("%d", ans);
//    return 0;
//}
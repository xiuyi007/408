//
// Created by 33907 on 2022/9/13.
//

#include <cstdlib>
#include <cstdio>

typedef struct LStack {
    int data;
    struct LStack *next;
}LStack, *LinkStack;

LinkStack HeadInsert(LinkStack &s) {
    LStack *lStack;
    int x;
    s = (LinkStack)malloc(sizeof (LStack));
    s->next = NULL;
    scanf("%d", &x);
    while (x != 9999) {
        lStack = (LStack *) malloc(sizeof (LStack));
        lStack->data = x;
        lStack->next = s->next;
        s->next = lStack;
        scanf("%d", &x);
    }
    return s;
}

LinkStack TailInsert(LinkStack &s) {
    LStack *tail;
    LStack *lStack;
    int x;
    s = (LinkStack) malloc(sizeof (LStack));
    tail = s;
    scanf("%d", &x);
    while (x != 9999) {
        lStack = (LStack *) malloc(sizeof (LStack));
        lStack->data = x;
        tail->next = lStack;
        tail = lStack;
    }
    tail->next = NULL;
    return s;

}

bool Push(LinkStack &linkStack, int &x) {
    LStack * lStack;
    lStack = (LStack *) malloc(sizeof (LStack));
    lStack->data = x;
    lStack->next = linkStack->next;
    linkStack->next = lStack;
    return true;
}

bool Pop(LinkStack &linkStack, int &x) {
    if (linkStack->next == NULL)
        return false;
    LStack *p = linkStack->next;
    x = p->data;
    linkStack->next = p->next;
    free(p);
    return true;
}


bool StackEmpty(LinkStack &s) {
    if (s->next == NULL)
        return true;
    return false;
}

//int main() {
//    LStack *lStack;
//    LinkStack linkStack;
//    HeadInsert(linkStack);
//    lStack = linkStack;
//    int key = 5;
//    Push(linkStack, key);
//    while (lStack->next != NULL){
//        lStack = lStack->next;
//        int x = lStack->data;
//        printf("%d   ", x);
//    }
//    int popKey;
//    Pop(linkStack, popKey);
//    printf("pop: %d", popKey);
//
//    return 0;
//}
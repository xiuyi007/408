//
// Created by 33907 on 2022/9/14.
//
#include <cstdio>

#define MAXSIZE 20
typedef struct SqQueue {
    int data[MAXSIZE];
    int front, rear;
}SqQueue;

void InitSqQueue(SqQueue &Q) {
    Q.rear = Q.front = 0;
}

bool isEmpty(SqQueue &Q) {
    if (Q.front = Q.rear)
        return true;
    return false;
}

bool isFull(SqQueue &Q) {
    if ((Q.rear + 1)%MAXSIZE == Q.front)
        return true;
    return false;
}

bool EnQueue(SqQueue &Q, int &x) {
    if ((Q.rear + 1)%MAXSIZE == Q.front)
        return false;
    Q.data[Q.rear] = x;
    Q.rear = (Q.rear + 1) % MAXSIZE;
    return true;
}

//bool DeQueue(SqQueue &Q, int &x) {
//    if (Q.front == Q.rear)
//        return false;
//    x = Q.data[Q.front];
//    Q.front = (Q.front + 1) % MAXSIZE;
//    return true;
//}


//int main(){
//    SqQueue sqQueue;
//    InitSqQueue(sqQueue);
//    int key = 2;
//    EnQueue(sqQueue, key);
//    key =3;
//    EnQueue(sqQueue, key);
//    int ans;
//    DeQueue(sqQueue, ans);
//    printf("%d", ans);
//    DeQueue(sqQueue, ans);
//    printf("%d", ans);
//    return 0;
//}
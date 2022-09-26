//
// Created by 33907 on 2022/9/25.
//

#ifndef DS_QUEUE_H
#define DS_QUEUE_H
#define MAXSIZE 10
typedef struct SqQueue {
    int data[MAXSIZE];
    int front, rear;
}SqQueue;

void InitQueue (SqQueue &queue) {
    queue.front = queue.rear = 0;
}

bool IsEmpty(SqQueue &queue) {
    if (queue.front = queue.rear)
        return true;
    return false;
}
bool IsFull(SqQueue &queue) {
    if ((queue.rear+1) % MAXSIZE == queue.front)
        return true;
    return false;
}

bool EnQueue(SqQueue &queue, int x) {
    if ((queue.rear + 1)%MAXSIZE == queue.front) return false;
    queue.data[queue.rear] = x;
    queue.rear = (queue.rear+1)%MAXSIZE;
    return true;
}

bool DeQueue(SqQueue &queue, int &x) {
    if (queue.rear == queue.front) return false;
    x = queue.data[queue.front];
    queue.front = (queue.front + 1) % MAXSIZE;
    return true;
}

void testQueue() {
    SqQueue sqQueue;
    int x;
    InitQueue(sqQueue);
    EnQueue(sqQueue, 2);
    EnQueue(sqQueue, 3);
    DeQueue(sqQueue, x);
    std::cout<<x;
    DeQueue(sqQueue, x);
    std::cout<<x;
}

#endif //DS_QUEUE_H

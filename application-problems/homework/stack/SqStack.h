//
// Created by 33907 on 2022/9/22.
//

#ifndef DS_SQSTACK_H
#define DS_SQSTACK_H

#define MAXSIZE 20
typedef struct SqStack {
    int data[MAXSIZE];
    int top;
}SqStack;

void InitStack(SqStack &sqStack) {
    sqStack.top = -1;
}

//出栈
bool Pop(SqStack &sqStack, int &x) {
    if (sqStack.top == -1) return false;
    x = sqStack.data[sqStack.top--];
    return true;
}
//入栈
bool Push(SqStack &sqStack, int &x) {
    if (sqStack.top == MAXSIZE-1) return false;
    sqStack.data[++sqStack.top] = x;
    return true;
}
//判空
bool IsEmpty(SqStack &sqStack) {
    if (sqStack.top == -1)
        return true;
    return false;
}
//判满
bool IsFull(SqStack &sqStack) {
    if (sqStack.top == MAXSIZE-1)
        return true;
    return false;
}
#endif //DS_SQSTACK_H

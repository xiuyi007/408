//
// Created by 33907 on 2022/9/13.
//
#define MAXSIZE 20
#include "stdio.h"
typedef struct {
    int data[MAXSIZE];
    int top;
}SqStack;

void InitStack(SqStack &s) {
    s.top = -1;
}

bool StackEmpty(SqStack &s) {
    if (s.top == -1)
        return true;
    return false;
}

bool StackFull(SqStack &s) {
    if (s.top == MAXSIZE-1)
        return true;
    return false;
}

bool Push(SqStack &s, int &x){
    if (s.top == MAXSIZE-1)
        return false;
    s.data[++s.top] = x;
    return true;
}

bool Pop(SqStack &s, int &x){
    if (s.top == -1)
        return false;
    x = s.data[s.top--];
    return true;
}

//int main(){
//    int x =1; //push to data
//    int y;  //get from stack
//    SqStack sqStack;
//    InitStack(sqStack);
//    Push(sqStack, x);
//    printf("dataPush:%d", sqStack.data[sqStack.top]);
//    Pop(sqStack, y);
//    printf("dataPop:%d", sqStack.data[sqStack.top]);
//    return 0;
//}
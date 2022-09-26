//
// Created by 33907 on 2022/9/14.
//
#define MAXSIZE 20
typedef char vertexType;
typedef int edgeType;
typedef struct {
    vertexType vertexList[MAXSIZE];   ///简单应用的话，可直接使用二维数组，顶点信息可忽略。
    edgeType edge[MAXSIZE][MAXSIZE];
    int vexNum, edgeNum;
}Graph;

//
// Created by 33907 on 2022/9/26.
//

#ifndef DS_2010_H
#define DS_2010_H

#include "../algorithm-problems/tools.h"
/*
 * 算法思想：
 * 把长度为n的序列分为xy两部分， x是数组前p个，y是剩余部分。实现序列左移，也就是把数组xy变成yx。
 * 可以通过一个额外的长度为p的数组暂存x部分，把y部分移动到x的部分，再把x的部分从暂存数组移动到原来y的部分。
 */
/*
 * 时间复杂度：n
 * 空间复杂度：p
 */
void move(int a[], int n, int p) {
    int b[p];
    int x; //用于存放新的数组下标
    for (int i = 0; i < p; ++i) {
        b[i] = a[i];
    }//复制a的数据到b
    for (int i = p-1; i < n; ++i) {
        a[i-p] = a[i];
    }//把y的部分移动到x的部分。
    for (int i = n-p; i < n; ++i) {
        a[i] = b[i-n+p];
    }
}
void test2010() {
    int a[10];
    createArray(a);
    move(a, 10, 3);
    printArray(a);
}
#endif //DS_2010_H

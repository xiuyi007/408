//
// Created by 33907 on 2022/9/28.
//

#ifndef DS_2016_H
#define DS_2016_H
#include "408tools.h"
#include "iostream"
/*
 * 算法思想：
 * 给定一个正整数集合，先对该集合进行快速排序排序得到有序序列，将前n/2个元素放到集合a， 剩余元素放到集合b。这样得到的两个集合满足要求。
 * 时间复杂度：nlog2n
 * 空间复杂度：log2n
 */
int partition(int a[], int n) {
    final408::quickSort(a, 0, n-1);
    int num, s1=0, s2=0;
    num = n/2;
    for (int i = 0; i < num; ++i) {
        s1 += a[i];
    }
    for (int i = num; i < n; ++i) {
        s2 += a[i];
    }
    return s2-s1;
}

void test2016() {
    int a[5] = {1, 2, 3, 4, 5};
    std::cout<< partition(a, 5);
}
#endif //DS_2016_H

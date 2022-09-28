//
// Created by 33907 on 2022/9/28.
//

#ifndef DS_2013_H
#define DS_2013_H

#include "iostream"
#include "408tools.h"
/*
 * 算法思想：
 * 给定一个整数序列，欲找其主元素，先对该序列进行快速排序得到一个有序序列，便把问题转换成了在一个有序序列中找是否有所有元素相同且长度大于n/2的子序列。
 * 找子序列可通过设置flag计数器，从头开始扫序列，若与前值相同，计数器加1，否则计数器清0， 重新开始计数。若计数器长度大于目标值则直接返回，否则失败。
 * 时间复杂度：nlog2n
 * 空间复杂度：log2n
 */

void mainElement(int a[], int n) {
    final408::quickSort(a, 0, n-1);
    int num = n/2 + 1;  //需要到达的长度
    int count = 1;  //计数器
    for (int i = 0; i < n-1; ++i) {
        if(a[i] == a[i+1])
            count++;
        else
            count = 1;
        if (count >= num){
            std::cout << a[i] << std::endl;
            return;
        }
    }
    std::cout << -1 << std::endl;
}

void test2013() {
//    int a[8] = {0,5, 5, 3, 5,1, 5, 7};
    int a[8] = {0, 5, 5, 3, 5, 7, 5, 5};
    mainElement(a, 8);
}
#endif //DS_2013_H

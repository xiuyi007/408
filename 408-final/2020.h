//
// Created by 33907 on 2022/9/28.
//

#ifndef DS_2020_H
#define DS_2020_H

#define MAX_INT 65535
#include "iostream"
#include "408tools.h"

/*
 * 算法思想：
 * 给定s1,s2, s3,将三个集合合并成一个大集合S, 对S进行快速排序得到有序集合S。不妨设(a, b, c), a < b < c,通过分析可知，D=其实是 2*(c-a)。故，问题转换为求集合中c-a的最小值。
 * 设立最大值ans初始为MAXSIZE，计算x = a[i+2] - a,若x < ans，则更新ans = x。最终得到最小距离ans。
 * 时间复杂度：nlog2n
 * 空间复杂度：log2n
 */
int minDistance(int s1[], int m, int s2[], int n, int s3[], int p) {
    int S[m+n+p];
    int min = MAX_INT;
    for (int i = 0; i < m; ++i) {
        S[i] = s1[i];
    }
    for (int j = m; j < m+n; ++j) {
        S[j] = s2[j-m];
    }
    for (int k = m+n; k < m + n + p; ++k) {
        S[k] = s3[k-m-n];
    }
    //以上是合并三个数组的过程
    final408::quickSort(S, 0, m+n+p-1);

    int tmp;
    for (int i = 0; i < m + n + p - 2; ++i) {
        tmp = abs(S[i+2] - S[i]);
        if (tmp < min)
            min = tmp;
    }
    return min*2;
}

void test2020() {
    int s1[2] = {5, 8};
    int s2[4] = {1, 3, -5, -9};
    int s3[1] = {0};
//    int s1[3] = {-1, 0, 9};
//    int s2[4] = {-25, -10, 10, 11};
//    int s3[5] = {2, 9, 17, 30, 41};
    std::cout << minDistance(s1, 2, s2, 4, s3, 1) << std::endl;
}
#endif //DS_2020_H

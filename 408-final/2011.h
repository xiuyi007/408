//
// Created by 33907 on 2022/9/26.
//

#ifndef DS_2011_H
#define DS_2011_H


#include "../algorithm-problems/tools.h"
#include "./408tools.h"
/*
 * 算法思想：
 * 将两个序列合并成新的序列X，对X进行快速排序得到有序序列，L为新序列的长度，若L为奇数，则选取X中下标为L/2的元素，若为偶数，则选取x中L/2+1的元素
 * 时间复杂度：(l log2l)
 * 空间复杂度：log2l
 */
int choose(int a[], int m, int b[], int n) { //m是第一个序列的长度，n是第二个
    //合并两个序列为新的序列。
    int L = m + n;
    int x[L];
    //两个for循环合并数组
    for (int i = 0; i < m; ++i) {
        x[i] = a[i];
    }
    for (int i = 0; i< n; ++i) {
        x[m+i] = b[i];
    }
    final408::quickSort(x, 0, L-1);  //快排
    if (L % 2 == 0)
        return x[L/2 -1];
    return x[L/2];
}

void test2011 () {
    int a[4]= {2, 1, 7, 17};
//    int a[5]= {11, 13, 15, 17, 19};
    int b[5] = {2, 4, 6, 8, 20};
    std::cout << "mid number:  " << choose(a, 4, b,5);
//    std::cout << "mid number:  " << choose(a, 5, b,5);

}
#endif //DS_2011_H

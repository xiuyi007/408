//
// Created by 33907 on 2022/9/28.
//

#ifndef DS_2018_H
#define DS_2018_H

#include "iostream"
/*
 * 算法思想：
 * 长度为n的数组，出现的最小未出现正整数最大是n+1，故可以用一个长度为n+1的数组，数组依次存放1~n+1的数字。即a[0] = 1, a[n] = n+1;
 * 扫描原数组a，若a[i]的值大于n或小于=0贼丢弃，否则，填入b[a[i]-1];
 * 扫描数组b，若b[i] = 0,则直接return i+1, i+1就是所求的最小正整数
 * 时间复杂度：n
 * 空间复杂度：n
 */
int minNum(int a[], int n) {
    int b[n+1];
    for (int i = 0; i < n+1; ++i) {
        b[i] = 0;
    }
    for (int i = 0; i < n; ++i) {
        if (a[i] > 0 && a[i] <= n)
            b[a[i]-1] = 1;
    }
    for (int i = 0; i < n + 1; ++i) {
        if (b[i] == 0)
            return i+1;
    }
    return n+1;
}

void test2018() {
    int a[8] = {1382, 1, 28236, 2, 3, 0, -100, -1};
    std::cout << minNum(a, 9) << std::endl;
}
#endif //DS_2018_H
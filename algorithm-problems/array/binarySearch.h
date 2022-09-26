//
// Created by 33907 on 2022/9/24.
//

#ifndef DS_BINARYSEARCH_H
#define DS_BINARYSEARCH_H

#include "iostream"
#include "../tools.h"
int binarySearch(int *a, int n, int key) {
    int low = 0, high = n-1;
    int mid;
    while (low <= high) {
        mid = (low + high)/2;
        if (a[mid] > key)
            low = mid + 1;
        else if (a[mid] < key)
            high = mid - 1;
        else
            return mid;
    }
    return -1;
}


void testBinarySearch() {
    int a[10];
    int key;
    int index;
    createArray(a);
    std::cout << "请输入要查找的数字" << std::endl;
    std::cin >> key;
    index = binarySearch(a, 10, key);
    std::cout << index;
}
#endif //DS_BINARYSEARCH_H

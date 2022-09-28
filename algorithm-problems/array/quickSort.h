//
// Created by 33907 on 2022/9/24.
//

#ifndef DS_QUICKSORT_H
#define DS_QUICKSORT_H


#include "../tools.h"
int Partition(int a[], int low, int high) {
    int index = low;
    int key = a[index];
    while (low < high) {
        while (a[high] > key && high > low)
            high = high -1;
        a[low] = a[high];
        while (a[low] <= key && low < high) //������һ��Ҫȡ�Ⱥ�
            low = low + 1;
        a[high] = a[low];
    }
    a[low] = key;
    return low;  //�������������λ�á�
}
void quickSort(int a[], int low, int high) {
    if (low < high) {
        int pivotPos = Partition(a, low, high);
        quickSort(a, low, pivotPos-1);
        quickSort(a, pivotPos+1, high);
    }
}

void testQuickSort() {
    int a[10];
    createArray(a);
    quickSort(a, 0, 9);
    printArray(a);
}
#endif //DS_QUICKSORT_H

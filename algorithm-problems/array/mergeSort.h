//
// Created by 33907 on 2022/9/24.
//

#ifndef DS_MERGESORT_H
#define DS_MERGESORT_H

#include <cstdlib>
#include "../tools.h"
void merge(int a[], int low, int mid, int high) {
    int i, j, k;
    //这里的b数组最好定义成全局的，不要像我这样卸载这个merge里面，这里只是为了图方便。
    int *b =(int *)malloc(sizeof (int )*20);  //这里20是指数组a的两倍
    for (int t = 0; t < 20; ++t) {
        b[t] = a[t];
    }
    for (i = low, j=mid+1, k=low; i <= mid && j <= high; k++) {
        if (b[i] < b[j]){
            a[k] = b[i++];
        }else {
            a[k] = b[j++];
        }
    }
    while (i <= mid) a[k++] = b[i++];
    while (j <= mid) a[k++] = b[j++];
    free(b);
}

void mergeSort(int a[], int low, int high) {
    if(low < high){
        int mid = (low + high)/2;
        mergeSort(a, low, mid);
        mergeSort(a, mid +1, high);
        merge(a, low, mid, high);
    }
}
void testMergeSort() {
    int a[10];
    createArray(a);
    mergeSort(a, 0, 9);
    printArray(a);
}
#endif //DS_MERGESORT_H

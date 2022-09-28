//
// Created by 33907 on 2022/9/28.
//

#ifndef DS_408TOOLS_H
#define DS_408TOOLS_H
namespace final408 {
    //快排
    void quickSort(int a[], int low, int high) {
        if (low >= high) return;
        int l, r, key;
        key = a[low];
        l = low, r = high;
        while (l < r) {
            while (a[r] > key && l < r) r--;
            a[l] = a[r];
            while (a[l] <= key && l < r) l++;
            a[r] = a[l];
        }
        a[l] = key;
        quickSort(a, low, l-1);
        quickSort(a, l+1, high);
    }

    //交换a 和 b 的值
    void swap(int &a, int &b){
        int tmp;
        tmp = a;
        a = b;
        b = tmp;
    }
}

#endif //DS_408TOOLS_H

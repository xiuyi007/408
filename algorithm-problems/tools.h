//
// Created by 33907 on 2022/9/24.
//

#ifndef DS_TOOLS_H
#define DS_TOOLS_H

#include "iostream"
//创建数组
void createArray(int a[]) {
    std::cout << "创建有序数组：请依次输入10个数字，并用空格分开"<< std::endl;
    for (int i = 0; i < 10; ++i) {
        int x;
        std::cin >> x;
        a[i] = x;
    }
}

//打印数组
void printArray(int a[]) {
    for (int i = 0; i < 10; ++i) {
        std::cout << a[i] << "  " << std::endl;
    }
}



//交换a 和 b 的值
void swap(int &a, int &b){
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
}
#endif //DS_TOOLS_H

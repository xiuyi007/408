//
// Created by 33907 on 2022/9/24.
//

#ifndef DS_TOOLS_H
#define DS_TOOLS_H

#include "iostream"
//��������
void createArray(int a[]) {
    std::cout << "�����������飺����������10�����֣����ÿո�ֿ�"<< std::endl;
    for (int i = 0; i < 10; ++i) {
        int x;
        std::cin >> x;
        a[i] = x;
    }
}

//��ӡ����
void printArray(int a[]) {
    for (int i = 0; i < 10; ++i) {
        std::cout << a[i] << "  " << std::endl;
    }
}



//����a �� b ��ֵ
void swap(int &a, int &b){
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
}
#endif //DS_TOOLS_H

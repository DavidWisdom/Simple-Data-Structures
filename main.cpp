//
// Created by DavidWisdom on 2022/10/2.
//
#include <iostream>
#include <cstring>
#include "src/stack.h"
#include "src/queue.h"
#include "src/heap.h"
using namespace std;
int main() {
    int a[10] = {2,4,6,8,10,9,7,5,3,1};
    memcpy(MyHeap::heap + 1, a, sizeof(int) * 10);
    MyHeap::len = 10;
    for (int i = 10 / 2; i > 0; --i) {
        MyHeap::siftUp(i);
    }
    for (int i = 0; i < 20; ++i) {
        cout << MyHeap::heap[i] << ' ';
    }
    return 0;
}


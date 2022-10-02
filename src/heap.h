//
// Created by DavidWisdom on 2022/10/2.
//

#ifndef SIMPLE_DATA_STRUCTURES_HEAP_H
#define SIMPLE_DATA_STRUCTURES_HEAP_H
#include <algorithm>
#include <cassert>
#include <cstring>
#define MAX_N 1000000
#define T int
namespace MyHeap {
#define MAX_HEAP
#ifdef MAX_HEAP
#define op >
#else
#define op <
#endif
    T heap[MAX_N];
    int len = 0;
    int size() {
        return len;
    }
    inline int son(int pos) {
        return 2 * pos + (2 * pos + 1 <= len && heap[2 * pos + 1] op heap[2 * pos]);
    }
    void siftUp(int pos) {
        for (; pos > 1 && heap[pos] op heap[pos >> 1]; pos >>= 1) {
            std::swap(heap[pos], heap[pos >> 1]);
        }
    }
    void siftDown(int pos) {
        for (int t = son(pos); t <= len && heap[t] op heap[pos]; pos = t, t = son(pos)) {
            std::swap(heap[pos], heap[t]);
        }
    }
    void push(const T& item) {
        heap[++len] = item;
        siftUp(len);
    }
    void pop() {
        assert(len != 0);
        std::swap(heap[1], heap[len--]);
        siftDown(1);
    }
    T top() {
        assert(len != 0);
        return heap[1];
    }
    void buildHeap() {

    }
}
#undef T
#undef MAX_N
#endif //SIMPLE_DATA_STRUCTURES_HEAP_H

//
// Created by DavidWisdom on 2022/10/2.
//

#ifndef SIMPLE_DATA_STRUCTURES_STACK_H
#define SIMPLE_DATA_STRUCTURES_STACK_H
#include <cassert>
#define MAX_N 1000000
#define T int
namespace MyStack {
    T array[MAX_N];
    int topId = 0;
    bool empty() {
        return topId == 0;
    }
    void clear() {
        topId = 0;
    }
    int size() {
        return topId;
    }
    // 入栈
    void push(const T& item) {
        assert(topId != MAX_N);
        array[topId++] = item;
    }
    // 出栈
    void pop() {
        assert(topId != 0);
        --topId;
    }
    // 返回栈顶元素
    T top() {
        assert(topId != 0);
        return array[topId - 1];
    }
}
#undef T
#undef MAX_N
#endif //SIMPLE_DATA_STRUCTURES_STACK_H

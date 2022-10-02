//
// Created by DavidWisdom on 2022/10/2.
//

#ifndef SIMPLE_DATA_STRUCTURES_QUEUE_H
#define SIMPLE_DATA_STRUCTURES_QUEUE_H
#define MAX_N 1000000
#define T int
namespace MyQueue {
    T array[MAX_N];
    int begin;
    int end;
    int len;
    bool empty() {
        return len == 0;
    }
    void clear() {
        begin = 0;
        end = 0;
        len = 0;
    }
    int size() {
        return len;
    }
    // 入队
    void push(const T& item) {
        // assert(len != MAX_N);
        array[end] = item;
        end = (end + 1) % MAX_N;
        ++len;
    }
    // 出队
    void pop() {
        // assert(len != 0);
        begin = (begin + 1) % MAX_N;
        --len;
    }
    // 返回队首元素
    T front() {
        // assert(len != 0);
        return array[begin];
    }
    // 返回队尾元素
    T back() {
        // assert(len != 0);
        return end == 0 ? array[MAX_N - 1] : array[end - 1];
    }
}
#undef MAX_N
#endif //SIMPLE_DATA_STRUCTURES_QUEUE_H

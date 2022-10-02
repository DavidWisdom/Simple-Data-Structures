//
// Created by DavidWisdom on 2022/10/2.
//
#include <iostream>
#include "src/stack.h"
#include "src/queue.h"
using namespace std;
int main() {
    for (int i = 0; i < 100; ++i) {
        MyQueue::push(i);
        cout << MyQueue::front() << endl;
        MyQueue::pop();
    }
}


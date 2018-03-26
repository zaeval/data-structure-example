//
//  adt_queue.hpp
//  data-structure-lab
//
//  Created by 홍승의 on 2018. 3. 26..
//  Copyright © 2018년 홍승의. All rights reserved.
//

#ifndef adt_queue_hpp
#define adt_queue_hpp

#include <iostream>

using namespace std;

template<typename T>
class Queue{
private:
    int top = 0;
    int size = 0;
    int bottom = 0;
    T *arr;
    void resize() {
        size_t newSize = ++size;
        T* newArr = new T[newSize];
        
        memcpy( newArr, arr, size * sizeof(T) );
        
        size = newSize;
        delete [] arr;
        arr = newArr;
    }
public:
    Queue();
    Queue(int size);
    ~Queue();
    void reserve(int size);
    bool isFull();
    int getTop();
    int getBottom();
    int getSize();
    bool isEmpty();
    void push(T input);
    T getTopValue();
    T pop();
    T getBottomValue();
};

#endif /* adt_queue_hpp */

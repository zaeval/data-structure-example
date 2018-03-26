//
//  adt_stack.hpp
//  data-structure-lab
//
//  Created by 홍승의 on 2018. 3. 26..
//  Copyright © 2018년 홍승의. All rights reserved.
//

#ifndef adt_stack_hpp
#define adt_stack_hpp

#include <iostream>

using namespace std;

template<typename T>
class Stack{
private:
    int top = 0;
    int size = 0;
    T *arr;
    void resize() {
        size_t newSize = ++size + 1;
        T* newArr = new T[newSize];
        
        memcpy( newArr, arr, size * sizeof(T) );
        
        size = newSize;
        delete [] arr;
        arr = newArr;
    }
public:
    Stack();
    Stack(int size);
    ~Stack();
    void reserve(int size);
    bool isFull();
    int getTop();
    int getSize();
    bool isEmpty();
    void push(T input);
    T getTopValue();
    T pop();
    
};

#endif

//
//  adt_stack.cpp
//  data-structure-lab
//
//  Created by 홍승의 on 2018. 3. 26..
//  Copyright © 2018년 홍승의. All rights reserved.
//

#include "adt_stack.hpp"

template <typename T>
Stack<T>::Stack(){
    arr = new T[size+1];
}
template <typename T>
Stack<T>::Stack(int size){
    this->size = size;
    Stack();
}
template <typename T>
Stack<T>::~Stack(){
    delete [] arr;
}
template <typename T>
void Stack<T>::reserve(int size){
    this->size = size;
    this->arr = new T[size+1];
}
template <typename T>
bool Stack<T>::isFull(){
    return this-> top >= this-> size;
}
template <typename T>
int Stack<T>::getTop(){
    return top;
}
template <typename T>
T Stack<T>::getTopValue(){
    return arr[top];
}
template <typename T>
int Stack<T>::getSize(){
    return size;
}
template <typename T>
bool Stack<T>::isEmpty(){
    return this->top == 0;
}
template <typename T>
void Stack<T>::push(T input){
    if(isFull()){
        resize();
        arr[++top] = input;
    }
    else{
        arr[++top] = input;
    }
}
template <typename T>
T Stack<T>::pop(){
    if(!isEmpty()){
        T ret = this->arr[this->top];
        --top;
        return ret;
    }
    else{
        return NULL;
    }
}
template <typename T>
void Stack<T>::clear(){
    delete []arr;
    size = 0;
    top = 0;
    arr = new T[size+1];
}

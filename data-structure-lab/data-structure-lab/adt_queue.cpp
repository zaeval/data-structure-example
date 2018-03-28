//
//  adt_queue.cpp
//  data-structure-lab
//
//  Created by 홍승의 on 2018. 3. 26..
//  Copyright © 2018년 홍승의. All rights reserved.
//

#include "adt_queue.hpp"

template <typename T>
Queue<T>::Queue(){
    top = 0;
    size = 0;
    bottom = 0;
    arr = new T[size+1];
    size = 1;
}
template <typename T>
Queue<T>::Queue(int size){
    this->size = size;
    Queue();
}
template <typename T>
Queue<T>::~Queue(){
    delete [] arr;
}
template <typename T>
void Queue<T>::reserve(int size){
    this->size = size;
    this->arr = new T[size+1];
}
template <typename T>
bool Queue<T>::isFull(){
    return this-> top == size-1 || this->bottom == size-1;
}
template <typename T>
int Queue<T>::getTop(){
    return top;
}
template <typename T>
int Queue<T>::getBottom(){
    return bottom;
}
template <typename T>
T Queue<T>::getTopValue(){
    
    return arr[top];
}
template <typename T>
T Queue<T>::getBottomValue(){
    return arr[bottom];
}
template <typename T>
int Queue<T>::getSize(){
    return size;
}
template <typename T>
bool Queue<T>::isEmpty(){
    return this->bottom == 0;
}
template <typename T>
void Queue<T>::push(T input){
    if(isFull()){
        resize();
        arr[++top] = input;
    }
    else{
        arr[++top] = input;
    }
    if(bottom == 0)
        ++bottom;
    top%=size;
}
template <typename T>
T Queue<T>::pop(){
    if(!isEmpty()){
        T ret = this->arr[this->bottom];
        
        
        bottom = (bottom+1)%size;
        if(isEmpty()){
            top = 0;
        }
        
        return ret;
    }
    else{
        return -1;
    }
}
template <typename T>
void Queue<T>::clear(){
    ~Queue();
    Queue();
}

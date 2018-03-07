//
//  lab0-1.cpp
//  data structure lab
//
//  Created by 홍승의 on 2018. 3. 7..
//  Copyright © 2018년 홍승의. All rights reserved.
//
//  number : 20171722
//  program id : lab0-1

#include <iostream>

struct ReturnObj{
    int data;
    int index;
};
ReturnObj findMin(int data[], int n) {
    int min = data[0];
    int index = 0;
    for (int i = 1; i < n; i++)
        if (data[i] < min){
            min = data[i];
            index = i;
        }
    return ReturnObj{min,index};
}
ReturnObj findMax(int data[], int n) {
    int max = data[0];
    int index = 0;
    for (int i = 1; i < n; i++)
        if (data[i] > max){
            max = data[i];
            index = i;
        }
    return ReturnObj{max,index};
}
int main(int argc, const char * argv[]) {
    
    freopen("/Users/hongseung-ui/data_structure_lab/data_structure_lab/Lab0-1.dat","r",stdin); // mac 에선 상대경로 불가..
   
    int N; // 데이터 갯수
    int in[100]; // 데이터 담는 배열
    
    scanf("%d",&N);
    
    for(int i = 0;i<N;i++){
        scanf("%d",&in[i]);
    }
    
    ReturnObj min = findMin(in,N);
    ReturnObj max = findMax(in,N);
    
    printf("Minimum number is %d at position %d, \nMaximum number is %d at position %d\n",min.data,min.index+1,max.data,max.index+1);
    
    return 0;
}


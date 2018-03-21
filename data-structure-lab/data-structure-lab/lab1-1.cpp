//
//  lab1-1.cpp
//  data-structure-lab
//
//  Created by 홍승의 on 2018. 3. 14..
//  Copyright © 2018년 홍승의. All rights reserved.
//

#include <iostream>
using namespace std;
int sum(int n,int m){
    printf("add(%d,%d)",n,m);
    if(n==0) return m;
    printf("->");
    return sum(n-1,m+1);
}
int sum_iterative(int n, int m){
    while(n>0){
        printf("n=%d m=%d; ",n,m);
        --n;
        ++m;
    }
    printf("n=%d m=%d; ",n,m);
    return m;
}
int main(){
    int n,m;
    
    scanf("%d %d",&n,&m);
    
    printf("\nsum= %d\n",sum(n,m));
    
    printf("\nsum= %d\n",sum_iterative(n,m));
    
    return 0;
}

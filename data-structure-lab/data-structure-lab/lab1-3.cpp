//
//  lab1-3.cpp
//  data-structure-lab
//
//  Created by 홍승의 on 2018. 3. 14..
//  Copyright © 2018년 홍승의. All rights reserved.
//

#include <iostream>
#include <map>
using namespace std;

map<int,int> memorise;
int fibo(int n){
    if(n<=1)
        return n;
    if(memorise.find(n)!=memorise.end())
        return memorise[n];
    return memorise[n] = fibo(n-1)+fibo(n-2);
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d\n",fibo(n));
}

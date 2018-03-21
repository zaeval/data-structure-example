//
//  lab1-2.cpp
//  data-structure-lab
//
//  Created by 홍승의 on 2018. 3. 14..
//  Copyright © 2018년 홍승의. All rights reserved.
//

#include <iostream>

using namespace std;
int fact(int n){
    printf("%d",n);
    if(n==1)
        return 1;
    printf("+");
    return n+fact(n-1);
}
int main(){
    int n;
    scanf("%d",&n);
    printf(" = %d\n",fact(n));
}

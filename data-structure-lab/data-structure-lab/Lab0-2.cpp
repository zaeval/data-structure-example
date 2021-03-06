//
//  Lab0-2.cpp
//  data_structure_lab
//
//  Created by 홍승의 on 2018. 3. 7..
//  Copyright © 2018년 홍승의. All rights reserved.
//
//  number : 20171722
//  program id : lab0-2

#include <iostream>
#include <string.h>

using namespace std;

int main(){
    
    
    freopen("/Users/hongseung-ui/data_structure_lab/data_structure_lab/Lab0-2.dat","r",stdin);
    
    int total = 0;
    
    while(true){
        char in[1000]={0,};
        gets(in); // 한줄 입력(엔터구분)
        if(in[0] == '\0') // 입력이 안들어왔으면 종료
            break;
        int wc=1;
        bool check=false;
        for(int i=0;i<strlen(in);i++){
            if(in[i] == ' ') // 스페이스바가 나왔을때 체크
                check=true;
            else if(in[i] != ' ' && check){
                ++wc;
                check = false;
            }
            else if(in[i] == ' ' && check)
                check = false;
                
        }
        printf("The number of words : %d\n",wc);
        total += wc;
    }
    printf("Total Number of Words: %d\n",total);
    
    return 0;
}

//
//  lab2-1.cpp
//  data-structure-lab
//
//  Created by 홍승의 on 2018. 3. 21..
//  Copyright © 2018년 홍승의. All rights reserved.
//

#include <iostream>
#define NUM_TERMS 8
using namespace std;

struct Term{
    int row;
    int col;
    int value;
};
void fastTranspose(Term beforeTrans[], Term afterTrans[]) {
    
    int num_cols = afterTrans[0].row = beforeTrans[0].col;
    int num_rows = afterTrans[0].col = beforeTrans[0].row;
    int num_terms = afterTrans[0].value = beforeTrans[0].value;
    
    int * row_terms = new int[num_cols];
    int * starting_pos = new int[num_cols];
    
    if(num_terms > 0){
        for(int ci=0; ci<num_cols; ci++){
            row_terms[ci] = 0;
        }
        for(int ti=1; ti<=num_terms; ti++){
            row_terms[beforeTrans[ti].col]++;
        }
        starting_pos[0] = 1;
        for(int ci = 1; ci < num_cols; ci++){
            starting_pos[ci] = starting_pos[ci-1] + row_terms[ci-1];
        }
        for(int ti = 1; ti <= num_terms; ti++) {
            
            int ai = starting_pos[beforeTrans[ti].col] ++;
        
            afterTrans[ai].row=beforeTrans[ti].col;
            afterTrans[ai].col=beforeTrans[ti].row;
            afterTrans[ai].value = beforeTrans[ti].value;
        }
    }

}
int main(){
    Term beforeTrans[]= {{6,6,8},{0,0,15},{0,3,22},{0,5,-15},{1,1,11},{1,2,3},{2,3,-6},{4,0,91},{5,2,28}};
    Term afterTrans[NUM_TERMS+1];
    
    fastTranspose(beforeTrans,afterTrans);
    
    return 0;
}

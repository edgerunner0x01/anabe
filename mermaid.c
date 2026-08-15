#include <stdio.h>

const int L = 3;
const int C = 3;


int main(){

    int nums[L][C];
    for (int i = 0; i < L; i++){
        for (int j = 0; j < C; j++){
            nums[i][j] = i*j; 
        }
    }


    for (int i = 0; i < L; i++){
        for (int j = 0; j < C; j++){
            printf("%i ",nums[i][j]); 
        }
        printf("\n");
    }

    return 0; 
}
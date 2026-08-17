#include <stdio.h>

int memVis(int x){
    for (int i = 0; i < x; i++){
        int num = createMemAdr(i);
        printf("%p : %i\n", &num, *&num);
    }
    return 0; 
}


int main(){
    int sector;
    printf("Enter Sector of memory to visualize: ");
    scanf("%i", &sector);

    memVis(sector)
    return 0;
}


/*
int main(){
    int num = 10 ; 
    printf("%p : %i\n", &num, num);
    printf("%i\n", *&num);
//    int *pNum = num ; 
//    printf("%i\n", num);
    
    return 0; 
}
*/
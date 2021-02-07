#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void main(){
    int ransu;
    while(1){
        srand((unsigned)time(NULL));
        ransu = rand() % 10 + 1;
        printf("number : %d\n",ransu);
        if(ransu == 10){
            printf("end the loop\n");
            break;
        }
    }
}
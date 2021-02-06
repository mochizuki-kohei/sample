#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void main(){
    int num;
    srand((unsigned)time(NULL));
    num = rand() % 6 + 1;
    printf("number : %d\n",num);
    if(num >= 3){
        printf("equal or more than 3\n");
    }
}
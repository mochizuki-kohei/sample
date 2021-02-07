#include <stdio.h>
#include "logic.h"
#include "showResult.h"

void main(){
    int num;
    init();
    printf("janken\n");
    printf("0:stone 1:sissors 2:paper\n");
    while(1){
        printf("choose your hand ->");
        scanf("%d",&num);
        if(num<0 || num > 2){
            printf("end\n");
            break;
        }else{
            setPlayer(num);
            setComputer();
            Judge();
        }
    }
}
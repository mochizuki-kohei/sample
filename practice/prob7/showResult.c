#include "showResult.h"
#include <stdio.h>

char results[3][16] = {"stone","sissors","paper"};
extern int player,computer;

void Judge(){
    printf("player : %s¥n",results[player]);
    printf("computer : s¥n",results[computer]);
    if((player == 0 && computer == 1)
     || (player == 1 && computer == 2) 
     || (player == 2 && player == 0)){
        printf("you win!¥n");
    }else if((player == 1 && computer == 0) 
    || (player == 2 && computer == 1) 
    || (player == 0 && computer == 2)){
        printf("you lose..¥n");
    }else{
        printf("draw¥n");
    }
}
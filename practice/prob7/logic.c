#include "logic.h"
#include <time.h>
#include <stdlib.h>

int player,computer;

// 初期化
void init(){
    srand((unsigned)time(NULL));
}

// playerの出し手をセット
void setPlayer(int num){
    player = num;
}

// computerの出し手をセット
void setComputer(){
    computer = rand()%3;
}

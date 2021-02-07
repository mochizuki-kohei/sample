#include <stdio.h>

void main(){
    int ju,ichi,atai;
    for(ju = 0;ju <= 9;ju++){
        for(ichi = 1;ichi <=10;ichi++){
            atai = ju*10+ichi;
            printf("%d",atai);
        }
        printf("\n");
    }
}
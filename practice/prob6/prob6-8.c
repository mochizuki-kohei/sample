#include <stdio.h>

int get_absolute(int);

void main(){
    int nyuryoku,zettaichi;
    printf("input a number ->");
    scanf("%d",&nyuryoku);
    zettaichi = get_absolute(nyuryoku);
    printf("%d\n",zettaichi);
}

int get_absolute(int seisu){
    int zettai;
    if(seisu<0){
        zettai = seisu*(-1);
    }else{
        zettai = seisu;
    }
    return zettai;
}

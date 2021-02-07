#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>

void main(){
    int retsu[5];
    int i,j;
    int sum=0;
    double ave;
    for(i=0;i<=4;i++){
        srand((unsigned)time(NULL));
        retsu[i]=rand()%10+1;
        printf("%d ",retsu[i]);
        sum += retsu[i];
        sleep(2);
    }
    printf("\n");
    ave=(double)sum/5;
    printf("sum : %d\n",sum);
    printf("average : %f\n",ave);
    printf("more than the average :");
    for(j=0;j<=4;j++){
        if(retsu[j]>ave){
            printf("%d ",retsu[j]);
        }
    } 
    printf("\n");
}
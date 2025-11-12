// 
#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr=(int *)malloc(5);
    ptr[0]=10;
    ptr[1]=20;
    ptr[2]=30;

    for(int i=0;i<3;i++){
        printf("%d",ptr[i]);
    }
    free(ptr);
    return 0;

}
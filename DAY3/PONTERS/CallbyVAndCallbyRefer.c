#include<stdio.h>

void changeValue(int *a){
    *a=50;
}

int main(){
    int x=10;
    changeValue(&x);
    printf("%d",x);
}
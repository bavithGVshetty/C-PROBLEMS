#include<stdio.h>

int main(){
    int a=10;
    int *p=&a;
    int **dp=&p;

    printf("%d",a);//10
    printf("%d",*p);//10
    printf("%d",**dp);
    printf("%d",*dp);


}
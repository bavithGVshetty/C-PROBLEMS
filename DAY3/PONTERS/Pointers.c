// WHAT IS A POINTER ?
// A pointer is a variable stores the address of another
// variable
// Used to access directly the data
// Pointer is memory efficient
// Rep using *

// TYPES OF POINTER
// 1.Null pointer 
// 2.void pointer
// 3.double pointer

#include<stdio.h>

int main(){
    int a=10;
    int *p=&a;

    printf("%d\n",a);//
    printf("%p\n",&a);//
    printf("%p\n",p);// ?
    printf("%d\n",*p);//

    // 10 A A 10
    *p=20;
    printf("%d",a);

}


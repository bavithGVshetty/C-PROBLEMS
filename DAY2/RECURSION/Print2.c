// Recursion has two cases
// 1.BASE CASE
// 2.RECURSIVE CASE
#include<stdio.h>

void printSeries(int n){
    // BASE CASE
        if(n==0){
        return;
    }
    printf("%d",n);
    n--;
    // RECURSIVE CASE
    printSeries(n);
}


int main(){
    int n=5;
    printSeries(n);
}
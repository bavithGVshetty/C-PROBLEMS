#include<stdio.h>

int main(){
    int ticket=135;

    int last_digit=ticket%10;
    if(last_digit==3||last_digit==8){
        printf("Lucky");
    }
    else{
        printf("Not lucky");
    }
}
// Total Vehicle

// V=200
// w=540

//1. V=TW+FW
// 2.W=2*TW+4*FW

// Find TW

// TW-V-FW.... by (1)

// W=2*(V-FW)+4FW

// W=2V-2FW+4FW

// W=2V+2FW

// FW=(W-2V)/2

#include<stdio.h>

int main(){
    int V,W;
    scanf("%d %d",&V,&W);

    int FW=(W-2*V)/2;
    int TW=V-FW;

    if(W%2!=0||TW<0||FW<0){
        printf("Invalid Input");
    }
    else{
        printf("TW=%d and FW=%d",TW,FW);
    }
    return 0;
}



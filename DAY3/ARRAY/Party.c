#include<stdio.h>
#include<stdlib.h>

#define T 5

int main(){
    int E[T]={7,0,5,1,3};
    int L[T]={1,2,1,3,4};
    // 6 4 4 6 
    // MAX=8
    int current_guests=0,max_guests=INT_MIN;

    for (int i = 0; i < T; i++)
    {
        current_guests+=E[i]-L[i];
        if(current_guests>max_guests){
            max_guests=current_guests;
        }
    }
    printf("%d\n",max_guests);
    



    
}

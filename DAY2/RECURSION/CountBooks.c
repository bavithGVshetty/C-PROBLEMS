#include<stdio.h>

int countBooks(int current,int target){
    if(current==target){
        return 1;
    }    
    return 1+countBooks(current-1,target);
}

int main(){
    int n,target;
    n=5,target=2;
    int result=countBooks(n,target);
}
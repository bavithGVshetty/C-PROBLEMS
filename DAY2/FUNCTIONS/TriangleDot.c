// 1 6 21 45

// T=i*(i+1)

// Result=T/2

#include<stdio.h>

int find(int n);

int find(int n){
    int i,t;
    for(i=1;;i++){
        t=i*(i+1);

        if(t/2==n){
            return 1;
        }
        if(t/2>n){
            return 0;
        }
    }
}
int main(){
    int n=1;
    scanf("%d",&n);
    if(find(n)){
        printf("We can create");
    }
    else{
        printf("We can't create");
    }

    
}


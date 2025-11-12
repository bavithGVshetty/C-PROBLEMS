// Functions
// A block of code that performs specific
// task
// TYPES OF FUNCTIONS
// 1.In-built->Main(),sqrt(),printf,scanf(),pow()
// 2.User Defined
// Function with parameter and with RV
// F with p and no RV
// F wiouth p and RV
// F without P and with RV

// Function is stored in STACK
// When function ends its memory is cleared

// 1.Function declaration
 void add(int a,int b);

//  2.Function Definition
 int add(int a,int b){
    return a+b;
 }

#include<stdio.h>

int main(){
    int x,y,result;
    // 3.Function call
    x=10,y=10;
    result=add(x,y);
    printf("%d",result);

}

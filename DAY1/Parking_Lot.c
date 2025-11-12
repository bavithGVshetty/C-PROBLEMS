#include<stdio.h>

int main(){
    int type;
    printf("Enter the vehicle type");
    scanf("%d",&type);

    switch (type)
    {
    case 1:
       printf("20$");
        break;
    case 2:
       printf("10$");
        break;
    case 3:
       printf("30$");
        break;
    default:
        break;
    }
}
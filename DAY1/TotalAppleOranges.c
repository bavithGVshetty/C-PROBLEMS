#include<stdio.h>
int main(){
    int m,n,m1,n1,x,y;
    printf("Enter the values\n");
    scanf("%d%d%d%d%d%d",&m,&n,&m1,&n1,&x,&y);
    int total_apples_Remaining=m+(m+m1)-x;
    int total_Oranges_Remaining=n+(n+n1)-y;

    printf("Total_Apples=%d",total_apples_Remaining);
    printf("The total Oranges=%d",total_Oranges_Remaining);
}
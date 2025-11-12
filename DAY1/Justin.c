// x=hours worked on weekends
// weekdays=x+10

// 1.Weekdays=80(x+10)=80x+800
// 2.Weekend=50x

// total_salary=80x+800+50x
// x=(total_salary-800)/130

#include<stdio.h>

int main(){
    double total_salary;
    scanf("%lf",&total_salary);

    int weekend_hours=(total_salary-800)/130;
    int weekdays=weekend_hours+10;

    printf("Weekdays=%d AND weekend=%d\n",weekdays,weekend_hours);

}
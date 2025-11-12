// Structure vs UNION

// structure is user defined data type
// It combines heterodenous data
// Defined by struct keyword

#include<stdio.h>
#include<string.h>
struct Student{
    int id;
    char name[50];
    float marks;
};

int main(){
    struct Student s1;
    s1.id=10;
    s1.marks=20.3;
    strcpy(s1.name,"Bavith");

}
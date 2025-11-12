// UNION in C
// SIMILAR TO STRUCTURE
// USES UNION KEYWORD

// Memory sharing
// All members are stored in one single location

#include<stdio.h>

union data{
    int i;
    float f;
    char str[20];
};

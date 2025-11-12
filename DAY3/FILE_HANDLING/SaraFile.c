#include<stdio.h>


int main(){
    FILE *file;
    char filename[50];
    char ch;
    printf("Enter the file name\n");
     scanf("%s",filename);
    file =fopen(filename,"r");

    printf("THE CONTENT ARE\n");

    while((ch=fgetc(file))!=EOF){
        putchar(ch);
    }

    fclose(file);
    
    return 0;


}
#include<stdio.h>


int main(){
    FILE *file;
    char filename[50];
    char message[1000];
    printf("Enter the file name\n");
    scanf("%s",filename);
    getchar();
    printf("Enter the message\n");
    fgets(message,sizeof(message),stdin);

    file=fopen(filename,"w");

    if(file==NULL){
        printf("ERROR");
        return 1;
    }
    fprintf(file,"%s",message);

    fclose(file);
    
    printf("SUCCESS WRITING FILE");
    return 0;
}
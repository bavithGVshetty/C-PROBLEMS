#include<stdio.h>

int main(){
    int a[]={10,20,30};
    int *p=a;

    printf("%p\n",p);
    printf("%p\n",a);

    printf("%d",*p);
p++;
    printf("\n%d",*p);
    
    printf("\n%d",*(p+1));
  


}
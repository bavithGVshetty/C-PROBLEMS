#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    int data[n];
    int freq[26]={0};

    for(int i=0;i<n;i++){
        scanf("%d",&data[i]);
        if(data[i]>=1&& data[i]<=25){
            freq[data[i]]++;
        }
    }

    for(int i=1;i<=25;i++){
        if(freq[i]>0){
            printf("%d->%d\n",i,freq[i]);
        }
    }
    return 0;
}
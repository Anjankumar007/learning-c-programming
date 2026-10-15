#include<stdio.h>
#include<stdlib.h>
int main(){
    int nums=1202105;
    int *freq=(int *)calloc(10,sizeof(int));
    while(nums>0){
        int rem=nums%10;
        freq[rem]++;
        nums=nums/10;
    }
    for(int i=0;i<10;i++){
        if(freq[i]>0)printf("%d :  %d\n",i,freq[i]);
    }
}
#include<stdio.h>
int main(){
    int arr[3][3]={
        {1,2,3},{4,5,6},{7,8,9}
    };
    int (*ptr)[3]=arr;
int top=0,bot=2,left=0,right=2;
    /* 1  2 3 4 5 6 7 8 9
    7 4 1 8 5 2 9 6 3*/
    for(int i=bot;i>=top;i--){
        printf("%d",ptr[i][left]);

    }printf("\n");
left++;
    for(int i=bot;i>=top;i--){
        printf("%d",ptr[i][left]);
    }printf("\n");
    left++;
    for(int i=bot;i>=top;i--){
        printf("%d",ptr[i][left]);
    }
}  
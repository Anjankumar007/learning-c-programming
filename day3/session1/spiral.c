#include<stdio.h>
int main(){
    int arr[3][3]={

        // lef    1 2 3 right 
        //        4 5 6 
        //        7 8 9
        //  bottom 
        {10,20,30,},{4,5,6},            
        {7,8,9,}};
int top = 0, bot = 2, left = 0, right = 2;

        int (*ptr)[3]=arr;
int n = sizeof(arr)/sizeof(int);
        for(int i=left;i<=right;i++){
            printf("%d",ptr[top][i]);
        }
        top++;
for(int i=top;i<=bot;i++){
    printf("%d",ptr[i][right]);
}
right--;

for(int i=right;i>=left;i--){
    printf("%d",ptr[bot][i]);
}
bot--;

for(int i = left;i<=right;i++ ){
    printf("%d",ptr[bot][i]);
}
    }

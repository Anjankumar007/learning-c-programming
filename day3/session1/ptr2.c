#include<stdio.h>
int main(){
    int arr[2][3]={
        {10,20,30},{30,34,45}
    };
    int (*ptr)[3]=arr;
    printf("%d\n",ptr[1][2]);
    printf("%d",*(*(ptr+0)+1));
}
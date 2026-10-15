#include<stdio.h>
int climb(int n ){
    if(n==0||n==1){
        return 1 ;
    }
    return climb(n-1)+climb(n-2);
}
int main(void){
    int n = 5;
    int ans = climb(2);
    printf("%d",ans);
}
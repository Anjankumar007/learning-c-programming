#include<stdio.h>
#include<stdlib.h>
typedef struct{
    long id;
    string reg[100];
    float weight ;
    float tweight;

}ticket;


void  netwe(ticket *t , int n){
    int ans;
    for(int i=0;i<n;i++){
        ans[i] = t[i].weight-t[i].tweight;
    }return ans;
}

int high(ticket *t, int n){
    int maxx = 0;
    for(int i=0;i<n;i++){
        if(t[i].weight>t[maxx].weight){
            maxx=i;
        }
    }return maxx;
}
int main(){
int n ;
printf("enter the number");
scanf("%d",&n);
if(n==0){
    printf("invalid input");
    return 0;
}

ticket *t[n] = (ticket * )malloc(n*sizeof(ticket));
for(int i=0;i<n;i++){
    printf("enter the id");
    scanf("%d",t[i].id);
    printf("enter reg no");
    scanf("s",t[i].reg);
    printf("enter the weight ");
    scanf("%f",t[i].weight);
    printf("enter the tweight");
    scanf("%f",t[i].tweight);
}
 int ans = netwe(t,n);
 int max = high(t,n);


printf("enter the id ");
scanf("")
}
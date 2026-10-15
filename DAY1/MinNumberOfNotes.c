#include<stdio.h>
int main(){
int notes[] = {100,50,20,10,5,2,1};

int n = 242;

int size = sizeof(notes)/sizeof(int );
int count=0;
for(int i =0;i<size;i++){
    count  += n/notes[i];
    n=n%notes[i];
}

printf("%d",count);
}
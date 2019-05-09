#include<stdio.h>

void funTwo(int n);

void funOne(int n){
    if(n > 0){
        printf("%d ", n);
        funTwo(n - 1);
    }
}

void funTwo(int n){
    if(n > 0){
        printf("%d ", n);
        funOne(n/2);
    }
}

int main(){
    printf("Indirect Recursion.\n");
    int x = 20;
    funOne(x);
    printf("\n");
}
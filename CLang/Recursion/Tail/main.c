#include<stdio.h>
#include<stdlib.h>

void TailRecursion(int n){
    if(n > 0){
        printf("%d ", n);
        TailRecursion(n - 1);
    }
}

void TailToWhile(int n){
    while(n > 0){
        printf("%d ", n);
        n--;
    }
}


int main(){
    TailRecursion(5);
    printf("\n");
    TailToWhile(5);
    printf("\n");
}
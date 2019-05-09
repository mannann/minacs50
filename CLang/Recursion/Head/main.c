#include<stdio.h>
#include<stdlib.h>

void HeadRecursion(int n){
    if(n > 0){
        HeadRecursion(n - 1);
        printf("%d ", n);
    }
}

void HeadToLoop(int n){
    int i = 1;
    while(i <= n){
        printf("%d ", i);
        i++;
    }
}
int main(){
    printf("Head Recursion in C Lang.\n");
    int x = 5;
    HeadRecursion(x);
    printf("\n");
    HeadToLoop(x);
    printf("\n");
}
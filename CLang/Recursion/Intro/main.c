#include<stdio.h>
#include<stdlib.h>


void DisplayForward(int n){
    if(n > 0){
        printf("%d ", n);
        DisplayForward(n - 1);
    }
}

void DisplayReverse(int n){
    if(n > 0){
        DisplayReverse(n - 1);
        printf("%d ", n);
    }
}


int main(){
    int n = 5;
    DisplayForward(n);
    printf("\n");
    DisplayReverse(n);
    printf("\n");
}
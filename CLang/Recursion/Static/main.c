#include<stdio.h>
#include<stdlib.h>


int StaticDisplay(int n){
    static int x = 0;
    if(n > 0){
        x++;
        return StaticDisplay(n - 1) + x;
    }
    return 0;
}

int main(){
    printf("Static Variable in Recursion Functions.\n");
    int t = 5;
    printf("%d ", StaticDisplay(t));
    printf("\n");
    printf("%d ", StaticDisplay(t));
    printf("\n");
}
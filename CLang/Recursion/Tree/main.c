#include<stdio.h>

void TreeRecursion(int n){
    if(n > 0){
        printf("%d ", n);
        TreeRecursion(n - 1);
        TreeRecursion(n - 1);
    }
}

int main(){
    printf("Tree Recursion.\n");
    int x = 5;
    TreeRecursion(x);
    printf("\n");
}
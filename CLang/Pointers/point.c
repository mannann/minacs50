#include <stdio.h>
#include <stdlib.h>
int main(){
    printf("Creating a pointer in heap memory. \n");
    int *p;
    p = (int *)malloc(5 * sizeof(int));
    p[0] = 1;
    p[2] = 3;
    printf("%d \n", p[0]);
    printf("%d \n", p[1]);
    printf("%d \n", p[2]);
    printf("%d \n", p[3]);
    printf("%d \n", p[4]);
}
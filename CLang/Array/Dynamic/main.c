#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("Creating Dynamic array.\n");
    int *arr = (int *)malloc(5 * sizeof(int));
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = 4;
    for(int i = 0; i < 5; i++){
        printf("%d \n", arr[i]);
    }
    printf("================\n");
    int *newArr = (int *)malloc(10 * sizeof(int));
    free(arr);
    arr = newArr;
    newArr = NULL;
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = 4;
    arr[4] = 5;
    arr[5] = 6;
    arr[6] = 7;
    for(int i = 0; i < 10; i++){
        printf("%d \n", arr[i]);
    }
}
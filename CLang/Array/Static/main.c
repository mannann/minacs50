#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("Static array.\n");
    int arr[5] = {1, 2, 3, 4, 5};
    for(int i = 0; i < 5; i++){
        printf("%d \n", arr[i]);
    }
}
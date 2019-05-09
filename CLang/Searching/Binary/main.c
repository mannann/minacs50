#include <stdio.h>
#include <stdlib.h>


typedef struct Array{
    int *A;
    int length,size;
}Array;

void Swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

Array CreateArray(int size, int length){
    Array arr;
    arr.size = size;
    arr.length = length;
    arr.A = (int *)malloc(sizeof(int) * arr.size);
    printf("Enter the array elements.\n");
    for(int i = 0; i < arr.length; i++){
        printf("> ");
        scanf("%d", &arr.A[i]);
    }
    return arr;
}

void DisplayArray(Array arr){
    for (int i = 0; i < arr.length; i++){
        printf("%d ", arr.A[i]);
    }
    printf("\n");
}

void SortArray(Array arr){
    int flag;
    for(int i = 0; i < arr.length; i++){
        flag = 0;
        for(int j = 0; j < arr.length - i - 1; j++){
            if(arr.A[j] > arr.A[j+1]){
                Swap(&arr.A[j], &arr.A[j+1]);
            }
        }
    }
}

int BinarySearch(Array arr, int ele){
    int min = 0;
    int mid;
    int max = arr.length;
    while(min <= max){
        mid = (min + max) / 2;
        if(ele == arr.A[mid]){
            return mid;
            break;
        }else if (arr.A[mid] < ele){
            min = mid + 1;
        }else{
            max = mid - 1;
        }
    }
    return -1;
}


int main(){
    printf("Linear Search in CLang.\n");
    Array arr;
    arr = CreateArray(10, 10);
    DisplayArray(arr);
    SortArray(arr);
    DisplayArray(arr);
    int i = BinarySearch(arr, 5);
    printf("%d", i);
    printf("\n");
}
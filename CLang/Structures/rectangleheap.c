#include <stdio.h>
#include <stdlib.h>

struct rectangle {
    int length;
    int breadth;
};

int main(){
    printf("Creating a structure in heap memory.\n");
    struct rectangle *p;
    p = (struct rectangle *)malloc(sizeof(struct rectangle));
    p->length = 20;
    (*p).breadth = 10;
    printf("%d \n", p->length);
    printf("%d \n", p->breadth);

}
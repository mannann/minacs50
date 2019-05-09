#include <stdio.h>
#include <stdlib.h>

struct rectangle {
    int length;
    int breadth;
};

int main(){
    printf("Structures with pointers. \n");

    struct rectangle r = {10, 5};
    struct rectangle *p = &r;
    printf("%d \n", r.length);
    printf("%d \n", r.breadth);
    p->length = 20;
    (*p).breadth = 10;
    printf("%d \n", r.length);
    printf("%d \n", r.breadth);
}
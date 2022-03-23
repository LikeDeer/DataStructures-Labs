#include <stdio.h>
#include <stdlib.h>

void main() {
    int list[5];
    int *plist[5] = {NULL,};

    plist[0] = (int *) malloc(sizeof(int));

    list[0] = 1;
    list[1] = 100;

    *plist[0] = 200;

    printf("value of list[0]        = %d\n", list[0]);
    printf("address of list[0]      = %p\n", &list[0]);
    printf("value of list           = %p\n", list);
    printf("address of list (&list) = %p\n", &list);

    printf("---------------------------------------------\n\n");
    printf("value of list[1]        = %d\n", list[1]);
    printf("address of list[1]      = %p\n", &list[1]);
    printf("value of *(list+1)      = %d\n", *(list + 1));
    printf("address of list+1       = %p\n", list+1);
}
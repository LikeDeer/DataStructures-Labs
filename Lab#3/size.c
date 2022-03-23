#include <stdio.h>
#include <stdlib.h>

void main() {
    int **x;

    printf("sizeof(x) = %lu\n", sizeof(x));
    printf("sizeof(*x) = %lu\n", sizeof(*x));
    printf("sizeof(**x) = %ly\n", sizeof(**x));
}
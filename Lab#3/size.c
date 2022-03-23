#include <stdio.h>
#include <stdlib.h>

void main() {
    int **x;

    printf("    [----- 정준호 2020069046 -----]\n\n");

    printf("sizeof(x) = %lu\n", sizeof(x));
    printf("sizeof(*x) = %lu\n", sizeof(*x));
    printf("sizeof(**x) = %lu\n", sizeof(**x));
}
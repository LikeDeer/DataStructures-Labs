#include <stdio.h>
#include <stdlib.h>

void main() {
    int **x;                                            // int형 이중 포인터 x 선언

    printf("    [----- 정준호 2020069046 -----]\n\n");

    printf("sizeof(x) = %lu\n", sizeof(x));             // x 는 int형 단일 포인터를 가리킬 포인터 (8bytes)
    printf("sizeof(*x) = %lu\n", sizeof(*x));           // *x 는 int형 변수를 가리킬 포인터 (8bytes)
    printf("sizeof(**x) = %lu\n", sizeof(**x));         // **x 는 int형 변수 (4bytes)
}
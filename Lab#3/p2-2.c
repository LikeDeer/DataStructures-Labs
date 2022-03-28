#include <stdio.h>

void print1(int *ptr, int rows);

int main() {
    int one[] = {0, 1, 2, 3, 4};

    printf("    [----- 정준호 2020069046 -----]\n\n");

    printf("one         = %p\n", one);                      // one 배열명은 배열의 주소
    printf("&one        = %p\n", &one);                     // 배열의 주소
    printf("&one[0]     = %p\n", &one[0]);                  // 배열의 첫번째 요소의 주소 = 배열의 주소. 3개 모두 같은 주소가 출력됨
    printf("\n");

    print1(&one[0], 5);

    return 0;
}

void print1(int *ptr, int rows) {
    /* print out a one-dimensional array using a pointer */

    int i;
    printf("Address \t Contents\n");
    for (i = 0; i < rows; i++)
        printf("%p \t %5d\n", ptr + i, *(ptr + i));         // ptr + i 는 포인터 연산으로, 인자로 받은 배열의 요소들에 접근함.
    printf("\n");
}
#include <stdio.h>

struct student {
    char lastName[13];      /* 13 bytes */
    int studentId;          /* 4 bytes */
    short grade;            /* 2 bytes */
};

int main() {
    struct student pst;

    printf("    [----- 정준호 2020069046 -----]\n\n");

    printf("size of student = %ld\n", sizeof(struct student));      // 13 + 4 + 2 = 19(bytes) 가 아님. padding 이 구조체 필드 사이에 끼워져서 컴파일 되어서 크기가 더 큼
    printf("size of int = %ld\n", sizeof(int));                     // sizeof(int) = 4(bytes).      구조체 필드의 크기는 그대로
    printf("size of short = %ld\n", sizeof(short));                 // sizeof(short) = 2(bytes).    구조체 필드의 순서에 따라 padding이 안붙을 수 있음.

    return 0;
}
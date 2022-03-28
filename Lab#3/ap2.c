#include <stdio.h>
#include <stdlib.h>

void main() {
    int list[5];
    int *plist[5];

    list[0] = 10;
    list[1] = 11;       // 배열 list 에는 { 10, 11, ?, ?, ? }(?는 쓰레기값)이 저장되어 있음

    plist[0] = (int *)malloc(sizeof(int));      // 포인터 plist[0]는 malloc 된 곳을 가리킴

    printf("    [----- 정준호 2020069046 -----]\n\n");

    printf("list[0] \t= %d\n", list[0]);                    // list[0]엔 10이 저장되어 있음
    printf("address of list \t= %p\n", list);               // 배열명 list 는 배열의 주소와 같다
    printf("address of list[0] \t= %p\n", &list[0]);        // list[0]의 주소는 배열의 주소와 같다
    printf("address of list + 0 \t= %p\n", list+0);         // list + 0 = list + 0*sizeof(int) (포인터 연산) 이므로 배열의 첫번째 요소의 주소
    printf("address of list + 1 \t= %p\n", list+1);         // list + 1 = 배열의 두번째 요소의 주소
    printf("address of list + 2 \t= %p\n", list+2);         // list + 2 = 배열의 세번째 요소의 주소
    printf("address of list + 3 \t= %p\n", list+3);         // list + 3 = 배열의 네번째 요소의 주소
    printf("address of list + 4 \t= %p\n", list+4);         // list + 4 = 배열의 다섯번째 요소의 주소
    printf("address of list[4] \t= %p\n", &list[4]);        // list[4]의 주소 = list + 4

    free(plist[0]);                             // plist[0]는 더이상 malloc 된 곳을 가리키지 않음
}
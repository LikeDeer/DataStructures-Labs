#include <stdio.h>
#include <stdlib.h>                     // malloc 함수가 포함된 헤더 파일

void main() {
    int list[5];                                        // int형 5개 배열
    int *plist[5] = {NULL,};                            // int형 5개 포인터 배열(모두 NULL로 초기화)

    plist[0] = (int *) malloc(sizeof(int));             // int 크기 하나 만큼 동적 할당하고 plist[0]가 가리킴

    list[0] = 1;
    list[1] = 100;                                      // list 에는 {1, 100, ?, ?, ?} 저장됨 (? 는 쓰레기값)

    *plist[0] = 200;                                    // 이전에 동적 할당된 공간에 200 저장
                                                        // 포인터 배열 plist 에는 {(malloc된 메모리 주소), ?, ?, ?, ?} 가 저장됨

    printf("    [----- 정준호 2020069046 -----]\n\n");

    printf("value of list[0]        = %d\n", list[0]);                  // list[0] = 1
    printf("address of list[0]      = %p\n", &list[0]);                 // list[0]의 주소 (ㄱ)
    printf("value of list           = %p\n", list);                     // 배열명 list = 배열 list의 주소 = list[0]의 주소 (ㄱ)
    printf("address of list (&list) = %p\n", &list);                    // list의 주소는 배열의 시작 주소 = (ㄱ)

    printf("---------------------------------------------\n\n");
    printf("value of list[1]        = %d\n", list[1]);                  // list[1] = 100
    printf("address of list[1]      = %p\n", &list[1]);                 // list[1]의 주소 = list + 1*sizeof(int) = (ㄱ) + 4 = (ㄴ)
    printf("value of *(list+1)      = %d\n", *(list + 1));              // *(list + 1) = list[1] = 100 (list + 1 = list + 1*sizeof(int)
    printf("address of list+1       = %p\n", list+1);                   // (ㄴ)

    printf("---------------------------------------------\n\n");
    printf("value of *plist[0]      = %d\n", *plist[0]);                // plist[0]이 가리키는 동적할당된 공간의 값 = 200
    printf("&plist[0]               = %p\n", &plist[0]);                // plist[0]의 주소 (ㄷ)
    printf("&plist                  = %p\n", &plist);                   // 배열 plist의 주소 = plist[0]의 주소 = (ㄷ)
    printf("plist                   = %p\n", plist);                    // 배열명 plist = 배열 plist의 주소 = (ㄷ)
    printf("plist[0]                = %p \n", plist[0]);                // 포인터 plist[0]가 갖고있는 값(주소) = 동적 할당된 그 주소
    printf("plist[1]                = %p \n", plist[1]);                // 포인터 plist[1]가 갖고있는 값(주소) = 쓰레기값
    printf("plist[2]                = %p \n", plist[2]);                // 포인터 plist[2]가 갖고있는 값(주소) = 쓰레기값
    printf("plist[3]                = %p \n", plist[3]);                // 포인터 plist[3]가 갖고있는 값(주소) = 쓰레기값
    printf("plist[4]                = %p \n", plist[4]);                // 포인터 plist[4]가 갖고있는 값(주소) = 쓰레기값

    free(plist[0]);                                     // 동적 할당된 메모리를 더 이상 가리키지 않음
}
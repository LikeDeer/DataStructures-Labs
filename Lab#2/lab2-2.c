#include <stdio.h>

int main() {
    int i;                                                          // int형 변수 i
    int *ptr;                                                       // int형 포인터 ptr
    int **dptr;                                                     // int형 이중포인터 dptr

                                                            /* 이중포인터는 포인터의 주소를 저장한다 */

    i = 123;                                                        // i 를 123 으로 초기화

    printf("----- [정준호]  [2020069046] -----\n");

    printf("\n[checking values before ptr = &i] \n");
    printf("value of i == %d\n", i);                                // i 의
    printf("address of i == %p\n", &i);
    printf("value of ptr == %p\n", ptr);
    printf("address of ptr == %p\n", &ptr);


    ptr = &i;           /* ptr is now holding the address of i */

    printf("\n[checking values after ptr = &i] \n");
    printf("value of i == %d\n", i);
    printf("address of i == %p\n", &i);
    printf("value of ptr == %p\n", ptr);
    printf("address of ptr == %p\n", &ptr);
    printf("value of *ptr == %d\n", *ptr);


    dptr = &ptr;        /* dptr is now holding the address of ptr */

    printf("\n[checking values after dptr = &ptr] \n");
    printf("value of i == %d\n", i);
    printf("address of i == %p\n", &i);
    printf("value of ptr == %p\n", ptr);
    printf("address of ptr == %p\n", &ptr);
    printf("value of *ptr == %d\n", *ptr);
    printf("value of dptr == %p\n", dptr);
    printf("address of dptr == %p\n", &dptr);
    printf("value of *dptr == %p\n", *dptr);
    printf("value of **dptr == %d\n", **dptr);


    *ptr = 7777;        /* changing the value of *ptr */

    printf("\n[after *ptr = 7777] \n");
    printf("value of i == %d\n", i);
    printf("value of *ptr == %d\n", *ptr);
    printf("value of **dptr == %d\n", **dptr);


    **dptr = 8888;      /* changing the value of **dptr */

    printf("\n[after **dptr = 8888] \n");
    printf("value of i == %d\n", i);
    printf("value of *ptr == %d\n", *ptr);
    printf("value of **dptr == %d\n", **dptr);

    return 0;
}
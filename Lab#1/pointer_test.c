// 작성자: 정준호

#include <stdio.h>

int main()
{
    int i, *p;                                          // 메모리의 두 공간을 각각 변수 i, 포인터 변수 p 로 지정

    i = 10;

    printf("value of i = %d\n", i);                     // 변수 i 는 10으로 초기화 되어 있음
    printf("address of i = %p\n", &i);                  // i의 주소
    printf("value of p = %p\n", p);                     // 포인터 p 는 초기화 되지 않아 쓰레기 값이 저장되어 있는 상태
    printf("address of p = %p\n", &p);                  // 포인터 p 의 주소 (1)

    p = &i;                                             // 포인터 p 에 변수 i 의 주소를 저장. p 는 i 를 가리킴

    printf("\n\n----- after p = &i ----------\n\n");
    printf("address of p = %p\n", &p);                  // 포인터 p 의 주소. (1)과 동일
    printf("dereferencing *p = %d\n", *p);              // 포인터 p 가 가리키는 변수(i)의 값

    return 0;
}
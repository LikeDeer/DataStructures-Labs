#include <stdio.h>

#define MAX_SIZE 100

float sum(float [], int);                               // float 배열과 int 변수를 매개변수로 하는 sum.
                                                        // 배열명을 인자로 호출할 때, 그 배열의 주소가 넘어가 call-by-reference 가 됨. 
                                                        // 배열 요소들의 합을 구하는 함수

float input[MAX_SIZE], answer;                          // float형 배열 input[100], float 변수 anser는 global
int i;                                                  // int i 도 global

void main(void) {
    for (i = 0; i < MAX_SIZE; i++)
        input[i] = i;                                   // input 배열을 { 1, 2, 3, ..., 99, 100 } 으로 초기화

    printf("    [----- 정준호 2020069046 -----]\n\n");

    /* for checking call by reference */
    printf("address of input = %p\n", input);           // 배열명 input은 배열의 주소

    answer = sum(input, MAX_SIZE);                      // input의 요소들의 합을 구해서 answer에 저장
    printf("The sum is: %f\n", answer);                 // 그 결과
}

float sum(float list[], int n) {                        // list[]에는 배열명이 전달되어, 그 배열의 주소가 복사되어 매개변수에 저장. call-by-reference. n은 누적합에서 사용할 배열의 크기
    printf("value of list = %p\n", list);               // 배열명은 배열의 주소
    printf("address of list = %p\n\n", &list);          // 배열의 주소. 위와 같다.

    int i;
    float tempsum = 0;
    for(i = 0; i < n; i++)                              // 인자로 받은 배열의 모든 요소를 누적합하는 반복문.
        tempsum += list[i];
    return tempsum;                                     // 누적합을 반환
}
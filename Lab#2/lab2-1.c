#include <stdio.h>

int main() {
    char charType;
    int integerType;
    float floatType;
    double doubleType;

    printf("----- [정준호]  [2020069046] -----\n");

    printf("Size of char : %ld byte\n", sizeof(charType));          // char형 변수의 크기 (1 byte)
    printf("Size of int: %ld bytes\n", sizeof(integerType));        // int형 변수의 크기 (4 byte)
    printf("Size of float: %ld bytes\n", sizeof(floatType));        // float형 변수의 크기 (4 byte)
    printf("Size of double: %ld bytes\n", sizeof(doubleType));      // double형 변수의 크기 (8 byte)


    printf("----------------------------------\n");

    printf("Size of char: %ld byte\n", sizeof(char));               // char 자료형의 크기 (1 byte)
    printf("Size of int: %ld bytes\n", sizeof(int));                // int 자료형의 크기 (4 byte)
    printf("Size of float: %ld bytes\n", sizeof(float));            // float 자료형의 크기 (4 byte)
    printf("Size of double: %ld bytes\n", sizeof(double));          // double 자료형의 크기 (8 byte)

    printf("----------------------------------\n");

    printf("Size of char*: %ld byte\n", sizeof(char*));             // char* 포인터의 크기. 64bit 리눅스(운영체제) 이므로 8 byte
    printf("Size of int*: %ld bytes\n", sizeof(int*));              // int* 포인터의 크기. 64bit 리눅스(운영체제) 이므로 8 byte
    printf("Size of float*: %ld bytes\n", sizeof(float*));          // float* 포인터의 크기. 64bit 리눅스(운영체제) 이므로 8 byte
    printf("Size of double*: %ld bytes\n", sizeof(double*));        // double* 포인터의 크기. 64bit 리눅스(운영체제) 이므로 8 byte

    return 0;
}
#include <stdio.h>

struct student1 {
    char lastName;
    int studentId;
    char grade;
};                              /* student1 구조체 정의. 구조체 변수 선언시 struct student1 이 필요함. */

typedef struct {
    char lastName;
    int studentId;
    char grade;
} student2;                     /* student2 는 typedef 예약어로 정의되어, 구조체 변수 선언시 struct 예약어를 생략할 수 있음 */

int main() {
    struct student1 st1 = {'A', 100, 'A'};              // student1 구조체 변수 st1 선언 및 초기화

    printf("    [----- 정준호 2020069046 -----]\n\n");

    printf("st1.lastName = %c\n", st1.lastName);        // 각각의 필드들을 출력
    printf("st1.studentId= %d\n", st1.studentId);
    printf("st1.grade = %c\n", st1.grade);


    student2 st2 = {'B', 200, 'B'};                     // student2 구조체 변수 st2 선언 및 초기화. struct 예약어가 생략될 수 있음.

    printf("\nst2.lastName = %c\n", st2.lastName);      // 각각의 필드를 출력
    printf("st2.studentId = %d\n", st2.studentId);
    printf("st2.grade = %c\n", st2.grade);

    student2 st3;                                       // student3 구조체 변수 st3 선언. 각 필드는 아직 초기화되지 않음.

    st3 = st2;                                          // ANSI C 이후로 같은 구조체 변수 끼리는 대입 연산이 가능. 모든 필드의 값이 복사된다.

    printf("\nst3.lastName = %c\n", st3.lastName);      // 각각의 필드를 출력. st2와 내용 같음
    printf("st3.studentId = %d\n", st3.studentId);
    printf("st3.grade = %c\n", st3.grade);

    /* equality test */                                 // 구조체 끼리 == 연산이 아직은 되지 않음. 각각 필드끼리 따로 == 연산 해야함.
    /*
    if (st3 == st2)         
        printf("equal\n");
    else
        printf("not equal\n");
    */
    return 0;
}
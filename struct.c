#include <stdio.h>

struct student1 { // 학생의 성씨, 학번, 학년 정보를 가지는 구조체 student1을 선언
    char lastName;
    int studentId;
    char grade;
};

typedef struct { // 학생의 성씨, 학번, 학년 정보를 가지는 구조체 student2를 선언, typedef 키워드 활용하여 student2 단독으로 사용할 수 있게 함
    char lastName;
    int studentId;
    char grade;
} student2;

int main(void)
{
    printf("----- 손영재 2018038080 ----- \n");
    struct student1 st1 = {'A', 100, 'A'}; // st1 구조체 선언후 student1 구조체 변수 st1에 각 정보 입력

    printf("st1.lastName = %c\n", st1.lastName);
    printf("st1.studentId = %d\n", st1.studentId);   
    printf("st1.grade = %c\n", st1.grade); // 앞서 입력한 'A', 100, 'A' 값이 순서대로 출력된다.

    student2 st2 = {'B', 200, 'B'}; // typedef 활용해 간략하게 st2 선언후 각 정보 입력

    printf("\nst2.lastName = %c\n", st2.lastName);
    printf("st2.studentId = %d\n", st2.studentId);   
    printf("st2.grade = %c\n", st2.grade); // 앞서 입력한 'B', 100, 'B'값이 순서대로 출력된다,.

    student2 st3; // student2 구조체 변수 st3 선언
    st3 = st2; // 해당 연산에 의해 st3내 모든 변수가 st2내 변수와 같은 값으로 치환됨.

    printf("\nst3.lastName = %c\n", st3.lastName);
    printf("st3.studentId = %d\n", st3.studentId);   
    printf("st3.grade = %c\n", st3.grade); // 따라서 st3의 각 검색값은 st2에서의 'B', '200', 'B'와 같은 값을 가진다.

    /* equality test */
/*
    if(st3 == st2)
        printf("equal\n"); // 컴파일러에서 두 구조체에 대한 동등성 검사 기능을 지원하지 않는다.
    else
        printf("not equal\n");
*/

return 0;
}

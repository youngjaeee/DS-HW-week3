#include <stdio.h>

struct student { // 문자열 배열, int형 변수, short형 변수를 멤버로 가지는 구조체 선언
    char lastName[13]; /* 13 bytes  */
    int studentId; /* 4 bytes  */
    short grade; /* 2 bytes  */
    // 단순 멤버변수 크기의 합 == 19 bytes
};

int main(void)
{
    printf("----- 손영재 2018038080 ----- \n");
    struct student pst; // student 구조체 pst 변수 선언

    printf("size of student = %ld\n", sizeof(struct student)); // 19가 아닌 24 bytes가 출력되며, 이 컴파일러는 padding을 지원함을 알 수 있다.
    printf("size of int = %ld\n", sizeof(int)); // int형 변수의 크기, 4bytes
    printf("size of short = %ld\n", sizeof(short)); // short형 변수의 크기, 2bytes

    return 0;
}
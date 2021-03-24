#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int **x; // 이중포인터 x를 선언
    printf("----- 손영재 2018038080 ----- \n");
    printf("sizeof(x) = %lu\n", sizeof(x)); //x의 값, 즉 x가 참조하는 대상A에 대한 int형 포인터 변수 크기를 출력함. 32bit 컴파일러 환경이므로 4bytes로 출력
    printf("sizeof(*x) = %lu\n", sizeof(*x)); //x가 참조하는 대상A의 값, 즉 대상 A가 참조하는 대상B에 대한 int형 포인터 변수 크기를 출력함. 32bit 컴파일러 환경이므로 4bytes로 출력
    printf("sizeof(**x) = %lu\n", sizeof(**x)); // x가 참조하는 대상A가 참조하는 대상B의 값, 즉 대상 B의 값에 대한 int형 변수 크기를 출력함. 4bytes.

    return 0;
}
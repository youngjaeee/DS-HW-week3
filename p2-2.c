#include <stdio.h>

void print1(int *ptr, int rows); // 배열의 각 요소의 주소와 값 출력하는 함수 선언, 매개변수로 배열 주소와 요소 개수를 받음.

int main(void)
{
    printf("----- 손영재 2018038080 ----- \n");
    int one[] = {0, 1, 2, 3, 4}; // int형 배열 one을 선언하여 좌측과 같이 초기화

    printf("one   = %p\n", one); // one값, 즉 배열 첫번째 요소의 주소값인 &one[0] 출력 -> a
    printf("&one   = %p\n", &one); // one 배열 자체의 주소값 출력, 값은 &one[0] = one과 동일함 -> a
    printf("&one[0] = %p\n", &one[0]); // 배열 첫번째 요소의 주소값인 &one[0] 출력 -> a

    print1(&one[0], 5); // print1 함수 호출, 인자로 one배열 첫번째 요소 주소값과 배열 크기 5를 넘김

    return 0;
}

void print1 (int *ptr, int rows) // main 함수에서 호출되면서 매개변수로 one배열 첫번째 요소 주소값과 배열 크기 5를 받음
{ /* print out a one-dimensional array using a pointer */

    int i; // 가리키는 요소의 순서를 나타낼 index 변수 선언
    printf("Address \t Contents\n");
    for(i = 0; i < rows; i++) // one 배열의 요소 개수만큼 하나씩
        printf("%p \t %5d\n", ptr+i, *(ptr+i)); // ptr기준 offset이 i만큼 떨어져 있는 메모리 주소와 값을 출력. 즉 one+i, *(one+i)와 동일한 값 출력
    printf("\n"); // 결과적으로 one 배열의 각 요소의 주소와 값을 출력하고 줄바꿈
}
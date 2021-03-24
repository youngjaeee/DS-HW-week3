#include <stdio.h>
#define MAX_SIZE 100

float sum(float[], int); // float형 배열의 주소와 int형 변수를 매개변수로 받아 배열 요소의 합을 반환하는 sum 함수 선언
float input[MAX_SIZE], answer; // 요소 크기가 100인 float형 배열 input과 답을 저장할 answer 변수 선언
int i; // 배열에 수를 대입할 때 index indicator로 쓰일 변수 i 선언
int main(void)
{
    printf("----- 손영재 2018038080 ----- \n");

    for(i = 0; i < MAX_SIZE; i++)
        input[i] = i; // input 배열 i번째 index 값에 i 대입

        /*for checking call by reference*/
        printf("address of input = %p\n", input); // input값, 즉 &input[0]을 출력한다. -> a

        answer = sum(input, MAX_SIZE); // sum 함수를 호출. 인자로 input 배열의 주소와 MAX_SIZE를 넘겨 합을 구해 반환값을 answer 대입
        printf("The sum is: %f\n", answer); // 반환받은 answer값 출력, 4950.000000
}

float sum(float list[], int n) // float형 포인터 list(call by reference)와 int형 변수 n(call by value)에 대한 공간 할당
{

    printf("value of list = %p\n", list); // list값, list가 생성되면서 복사한 input 배열의 주소가 출력된다. -> a
    printf("address of list = %p\n\n", &list); // 새로 생성한 list 포인터의 주소값을 출력한다. -> b

    int i; // 배열에 수를 대입할 때 index indicator로 쓰일 변수 i 선언
    float tempsum = 0; // 배열의 요소합을 임시로 저장할 변수 tempsum 선언 및 초기화
    for(i = 0; i < n; i++)
        tempsum += list[i]; // for문을 통해 모든 요소를 더해 tempsum에 저장한후
    return tempsum; // tempsum 값을 반환해 main함수의 answer 변수에 대입
}
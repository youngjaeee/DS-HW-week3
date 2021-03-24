#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    printf("----- 손영재 2018038080 ----- \n");
    int list[5]; // 요소의 크기가 5인 int형 배열 list 선연
    int *plist[5] = {NULL, }; // 요소인 포인터의 개수가 5인 int형 포인터 배열 plist 선언 및 초기화

    plist[0] = (int *)malloc(sizeof(int)); // int형 포인터인 plist[0]에 malloc 함수로 동적할당하여 주소값 대입

    list[0] = 1; // list 배열의 첫번째 요소에 1 대입
    list[1] = 100; // list 배열의 두번째 요소에 2 대입

    *plist[0] = 200; // plist 배열의 첫번째 요소인 plist[0] 포인터로 간접참조하여 200 대입

    printf("value of list[0]            = %d\n", list[0]); // list[0] = 1
    printf("address of list[0]          = %p\n", &list[0]); // 요소 list[0]의 주소값 출력 -> a
    printf("value of list               = %p\n", list); // list 배열의 이름은 배열의 첫번째 요소 주소값인 &list[0]과 같음 -> a
    printf("address of list (&list)     = %p\n", &list); // list 배열 자체의 주소값 출력, 값은 &list[0] = list와 동일함 -> a

    printf("--------------------------------------------\n\n");
    printf("value of list[1]            = %d\n", list[1]); // list[1] = 100
    printf("address of list[1]          = %p\n", &list[1]); // 요소 list[1]의 주소값 출력 -> b
    printf("value of *(list+1)          = %p\n", *(list+1)); // (list+1)은 list 배열의 두번째 요소를 가리키므로, *(list+1) = list[1] = 100
    printf("address of list+1           = %p\n", list+1); // (list+1)의 값은 list 배열 두번째 요소의 주소값과 같다. -> b

    printf("--------------------------------------------\n\n");
    printf("value of *plist[0]          = %d\n", *plist[0]); // *plist[0] = 200
    printf("&plist[0]                   = %d\n", &plist[0]); // 요소 plist[0]의 주소값 출력 -> c
    printf("&plist                      = %d\n", &plist); // plist 배열 자체의 주소값 출력, 값은 &plist[0] = plist와 동일함 -> c
    printf("plist                       = %d\n", plist);   // plist 배열의 이름은 배열의 첫번째 요소 주소값인 &plist[0]과 같음 -> c
    printf("plist[0]                    = %d\n", plist[0]); // plist[0]의 value, 즉 앞서 malloc을 통해 동적할당하여 참조하고 있는 대상의 주소를 출력함. -> d
    printf("plist[1]                    = %d\n", plist[1]); // plist[1]의 value, plist[1]이 참조할 대상에 대한 할당을 하지 않았기 때문에 NULL
    printf("plist[2]                    = %d\n", plist[2]); // plist[2]의 value, plist[2]이 참조할 대상에 대한 할당을 하지 않았기 때문에 NULL
    printf("plist[3]                    = %d\n", plist[3]); // plist[3]의 value, plist[3]이 참조할 대상에 대한 할당을 하지 않았기 때문에 NULL   
    printf("plist[4]                    = %d\n", plist[4]); // plist[4]의 value, plist[4]이 참조할 대상에 대한 할당을 하지 않았기 때문에 NULL

    free(plist[0]);  // 동적할당했던 plist[0]을 free 함수를 통해 할당 해제     
    return 0;    
}
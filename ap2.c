#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int list[5]; // 요소의 크기가 5인 int형 배열 list 선연
    int *plist[5]; // 요소인 포인터의 개수가 5인 int형 포인터 배열 plist 선

    list[0] = 10; // list 배열의 첫번째 요소에 10 대입
    list[1] = 11; // list 배열의 두번째 // 요소 list[0]의 주소값 출력 -> a요소에 11 대입

    plist[0] = (int*)malloc(sizeof(int)); // int형 포인터인 plist[0]에 malloc 함수로 동적할당하여 주소값 대입

    printf("----- 손영재 2018038080 ----- \n");
    printf("list[0] \t= %d\n", list[0]); // list[0] = 10
    printf("adress of list \t\t= %p\n", list); // list 배열의 이름은 배열의 첫번째 요소 주소값인 &list[0]과 같음 -> a
    printf("adress of list[0] \t= %p\n", &list[0]); // 요소 list[0]의 주소값 출력 -> a
    printf("adress of list + 0 \t= %p\n", list+0);  // list+0은 list2[0]을 가리키는 포인터, 즉 &list[0]과 같음 -> a
    printf("adress of list + 1 \t= %p\n", list+1); //  list+1은 list2[1]을 가리키는 포인터, 즉 &list[1]과 같음
    printf("adress of list + 2 \t= %p\n", list+2); //  list+2은 list2[2]을 가리키는 포인터, 즉 &list[2]과 같음
    printf("adress of list + 3 \t= %p\n", list+3); //  list+3은 list2[3]을 가리키는 포인터, 즉 &list[3]과 같음
    printf("adress of list + 4 \t= %p\n", list+4); //  list+4은 list2[4]을 가리키는 포인터, 즉 &list[4]과 같음 -> b
    printf("adress of list[4] \t= %p\n", &list[4]); // 요소 list[4]의 주소값 출력 -> b
    
    free(plist[0]);  // 동적할당했던 plist[0]을 free 함수를 통해 할당 해제  
    return 0;
}
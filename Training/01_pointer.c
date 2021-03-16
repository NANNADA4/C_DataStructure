#include <stdio.h>

int main() {
    int num1 = 10;  // 소프트웨어 -> 메모리 10을 저장
    int* numPtr;

    numPtr = &num1;  // 소프트웨어 -> num1의 주소 저장

    printf("%p\n", numPtr);
    printf("%p\n", &num1);
    printf("%p\n", *numPtr);  // numPtr의 주소

    // 포인터 연산자 설명

    int a = 0;
    int* p1 = &a;
    int* p2;

    p2 = p1;

    printf("%d %p", p2, *p2);

    return 0;
}
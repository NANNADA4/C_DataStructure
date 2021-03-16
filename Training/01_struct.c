#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

struct Person {
    char name[20];      // 문자형 배열 name
    int age;            // 정수형 배열 age
    char address[100];  // 문자형 배열 address
};

int main() {
    int a;
    struct Person p1;  // 구조체 Person을 p1으로 선언

    p1.age = 30;                                   // 선언 방법 1 (정수형 선언하는 방법)
    strcpy(p1.name, "정명호");                     // 선언 방법 2 (문자열 선언하는 방법)
    strcpy(p1.address, "강원도 원주시 연세대길");  // 선언 방법 2

    struct Person p2 = {"홍길동", 45, "서울시 성북구"};  // 선언 방법 3

    printf("이름 : %s\n", p1.name);
    printf("나이 : %d\n", p1.age);
    printf("홍길동 주소 : %s\n", p2.address);

    return 0;
}
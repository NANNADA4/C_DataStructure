#include <stdio.h>

void Recursive(int num) {  // Recursive 함수 생성
    if (num <= 0) {        // 반복문의 탈출조건
        return;            // 반복문 탈출
    }
    printf("Recursive call %d \n", num);  // 현재 num을 출력
    Recursive(num - 1);                   // 반복문이 한 번 반복될 때마다 num - 1
}

int main() {
    Recursive(3);  // Recursive 함수에 3을 대입
    return 0;
}
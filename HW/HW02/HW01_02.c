#include <stdio.h>

int i = 0;

int Fibo(int n) {  // Fibo 함수 생성
    printf("func call %d %d \n", n, i);
    i++;           // 함수가 한 번 실행될 때마다 i의 값이 1 증가
    if (n == 1) {  // n이 1일 경우, 0을 반환한다
        return 0;
    } else if (n == 2) {  //n이 2일 경우, 1을 반환한다
        return 1;
    } else {
        return Fibo(n - 1) + Fibo(n - 2);
    }  //n이 1, 2 이외의 경우 수열의 n-1번째 값 + 수열의 n-2번째 값을 구한다
}

int main() {
    Fibo(7);  // Fibo 함수에 7을 대입한다
    return 0;
}
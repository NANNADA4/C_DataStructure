#include <stdio.h>

int Factorial(int n) {  // Factorial 함수를 생성한다.
    if (n == 0) {       // n이 0이 될 경우, 1을 반환한다.
        return 1;
    } else {
        return n * Factorial(n - 1);
        // n이 0 이외일 경우, n * Factorial(n - 1)로 재귀함수를 실행한다.
        // n이 1일 경우 Factorial(n - 1)를 실행하며 n이 0이 되기에 1을 반환하게 된다.
    }
}

int main() {
    printf("%d", Factorial(5));  // Factorial 함수에 5를 대입하고, 결과값을 출력한다.

    return 0;
}
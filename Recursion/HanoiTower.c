#include <stdio.h>

int hanoi(int n, char A, char B, char C) {
    if (n == 1) {
        printf("원반 1을 %c에서 %c로 이동 \r\n", A, C);
    } else {
        hanoi(n - 1, A, C, B);
        printf("원반 %d을(를) %c에서 %c로 이동 \r\n", n, A, C);
        hanoi(n - 1, B, A, C);
    }
}

int main() {
    hanoi(3, 'A', 'B', 'C');
    return 0;
}
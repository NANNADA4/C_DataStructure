#include <stdio.h>

int Fac(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * Fac(n - 1);
    }
}

int main() {
    printf("5! = %d \r\n", Fac(5));
    return 0;
}
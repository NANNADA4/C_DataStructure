#include <stdio.h>

int Tile(int n) {  // 타일링을 위한 Tile 함수와 입력을 받기 위한 int n을 선언한다
    if (n == 1) {  // n이 1일 경우 2 * 1에서 분할 가능한 경우의 수는 1이므로 1을 반환하고 탈출한다
        return 1;
    } else if (n == 2) {  // n이 2일 경우 2 * 2에서 분할 가능한 경우의 수는 2이므로 2를 반환하고 탈출한다
        return 2;
    } else if (n >= 3) {                           // n이 3 이상일 경우 (n-1) + (n-2)와 같은 점화식이 나오므로 이를 적용한다
        return Tile(n - 1) + Tile(n - 2) % 10007;  // 문제에서 주어진 조건대로 10007을 나눈 나머지를 반환한다
    }
}

int main() {
    int n;
    int value;

    scanf("%d", &n);      // 입력을 받아 n에 대입을 한다.
    value = Tile(n);      // 입력을 받은 n을 Tile 함수에 대입을 한 뒤, return 값을 value라는 변수를 따로 생성하여 저장한다
    printf("%d", value);  // return 값을 출력을 한다
}
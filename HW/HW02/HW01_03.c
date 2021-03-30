#include <stdio.h>

void HanoiTower(int n, char from, char tmp, char to) {  // HanoiTower 함수 생성
    if (n == 1) {                                       // 원반이 1개가 되었을 경우, 다음 문장을 출력하며 탈출한다
        printf("Disk1 : %c -> %c \n", from, to);
    } else {                               // 원반이 1개 이상일 경우 다음 코드 실행
        HanoiTower(n - 1, from, to, tmp);  // HanoiTower 함수에 n - 1, from, to, tmp 대입
        printf("Disk%d : %c -> %c \n", n, from, to);
        HanoiTower(n - 1, tmp, from, to);  // HanoiTower 함수에 n - 1, tmp, from, to 대입
    }
}

int main() {
    HanoiTower(3, 'A', 'B', 'C');  // HanoiTower 함수에 3, 'A', 'B', 'C' 대입
    return 0;
}
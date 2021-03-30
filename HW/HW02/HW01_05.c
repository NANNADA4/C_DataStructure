#include <stdio.h>

int BinarySearch(int arr[], int first, int last, int target) {
    int mid;             // 탐색 범위의 중앙 위치를 저장하기 위한 변수를 선언한다.
    if (first > last) {  // 탐색 범위의 시작이 탐색범위의 끝보다 커지게 될 경우 탐색 실패로 탈출한다
        return -1;
    }

    mid = (first + last) / 2;  // 중앙 위치를 구한 뒤, 변수 mid에 저장한다

    if (arr[mid] == target) {  // target과 arr[mid] 값이 동일한 경우 mid를 반환하며 탈출한다
        return mid;
    } else if (arr[mid] > target) {  // target 보다 arr[mid]값이 더 큰 경우, BinarySearch(arr, first, mid - 1, target)를 실행한다
        return BinarySearch(arr, first, mid - 1, target);
    } else {  // 이 외의 경우, return BinarySearch(arr, mid + 1, last, target)를 실행한다
        return BinarySearch(arr, mid + 1, last, target);
    }
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 13};   // BinarySearch 함수 대입을 위한 변수 선언
    int last = sizeof(arr) / sizeof(int);  // 배열의 갯수는 변경이 될 수 있기 때문에 이와 같이 사용 예) 배열의 갯수 10, 40 / 4 = 10

    int value = BinarySearch(arr, 0, last, 11);

    if (value == -1) {
        printf("탐색에 실패했습니다.");  // 탐색에 실패하여 -1이 반환된 경우, 이와 같은 문구 출력
    } else {
        printf("배열의 %d번째 있습니다.", value + 1);  // 탐색에 성공한 경우, mid값을 받아 배열의 몇 번째에 위치하는지 출력한다
    }
}
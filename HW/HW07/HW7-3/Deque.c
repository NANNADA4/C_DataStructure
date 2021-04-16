#include "Deque.h"

#include <stdio.h>
#include <stdlib.h>

// 공백덱 생성
Deque* create() {
    Deque* DQ = (Deque*)malloc(sizeof(Deque));
    DQ->front = NULL;
    DQ->rear = NULL;
    return DQ;
}

// 덱이 포화상태인지 확인하는 연산
int isFull(Deque* DQ) {
    // Fill your code
}

// 덱이 공백상태인지 확인하는 연산
int isEmpty(Deque* DQ) {
    // Fill your code
}

// 덱의 머리에 요소 추가하는 연산
void insertFront(Deque* DQ, element x) {
    // Fill your code
}

// 덱의 꼬리에 요소 추가하는 연산
void insertRear(Deque* DQ, element x) {
    // Fill your code
}

// 덱의 머리에 위치한 요소 삭제 및 반환하는 연산
element deleteFront(Deque* DQ) {
    // Fill your code
}

// 덱의 꼬리에 위치한 요소 삭제 및 반환하는 연산
element deleteRear(Deque* DQ) {
    // Fill your code
}

// 덱의 머리에 위치한 요소 반환하는 연산. 삭제 X
element getFront(Deque* DQ) {
    // Fill your code
}

// 덱의 꼬리에 위치한 요소 반환하는 연산. 삭제 X
element getRear(Deque* DQ) {
    // Fill your code
}

// 덱의 모든 요소 출력
void displayDeque(Deque* DQ) {
    dequeNode* p = DQ->front;
    printf("Deque [ ");
    while (p) {
        printf("%d ", p->data);
        p = p->rlink;
    }
    printf(" ]\n");
}

// 덱 비우기
void clear(Deque* DQ) {
    dequeNode* p;
    while (DQ->front) {
        p = DQ->front;
        DQ->front = DQ->front->rlink;
        free(p);
        p = NULL;
    }
}

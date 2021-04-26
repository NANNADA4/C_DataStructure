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
    return 0;
}

// 덱이 공백상태인지 확인하는 연산
int isEmpty(Deque* DQ) {
    if (DQ->front == NULL) {
        return TRUE;
    } else {
        return FALSE;
    }
}

// 덱의 머리에 요소 추가하는 연산
void insertFront(Deque* DQ, element x) {
    dequeNode* newNode = (dequeNode*)malloc(sizeof(dequeNode));
    newNode->data = x;
    newNode->rlink = DQ->front;
    newNode->llink = NULL;
    if (isEmpty(DQ)) {
        DQ->rear = newNode;
    } else {
        DQ->front->llink = newNode;
    }
    newNode->llink = NULL;
    DQ->front = newNode;
}

// 덱의 꼬리에 요소 추가하는 연산
void insertRear(Deque* DQ, element x) {
    dequeNode* newNode = (dequeNode*)malloc(sizeof(dequeNode));
    newNode->data = x;
    newNode->llink = DQ->rear;
    newNode->rlink = NULL;
    if (isEmpty(DQ)) {
        DQ->front = newNode;
    } else {
        DQ->rear->rlink = newNode;
    }
    newNode->rlink = NULL;
    DQ->rear = newNode;
}

// 덱의 머리에 위치한 요소 삭제 및 반환하는 연산
element deleteFront(Deque* DQ) {
    dequeNode* p;
    int rdata;

    if (isEmpty(DQ)) {
        return ERROR;
    }
    p = DQ->front;
    rdata = p->data;
    DQ->front = DQ->front->rlink;
    free(p);

    if (DQ->front == NULL) {
        DQ->rear = NULL;
    } else {
        DQ->front->llink = NULL;
    }
    return rdata;
}

// 덱의 꼬리에 위치한 요소 삭제 및 반환하는 연산
element deleteRear(Deque* DQ) {
    dequeNode* p;
    int rdata;

    if (isEmpty(DQ)) {
        return ERROR;
    }
    rdata = DQ->rear->data;
    DQ->rear = DQ->rear->llink;
    free(p);

    if (DQ->rear == NULL) {
        DQ->front = NULL;
    } else {
        DQ->rear->rlink = NULL;
    }
    return rdata;
}

// 덱의 머리에 위치한 요소 반환하는 연산. 삭제 X
element getFront(Deque* DQ) {
    if (isEmpty(DQ)) {
        return ERROR;
    } else {
        return DQ->front->data;
    }
}

// 덱의 꼬리에 위치한 요소 반환하는 연산. 삭제 X
element getRear(Deque* DQ) {
    if (isEmpty(DQ)) {
        return ERROR;
    } else {
        return DQ->rear->data;
    }
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

#include "Heap.h"

#include <stdio.h>
#include <stdlib.h>

// 공백 힙 생성
Heap* createHeap() {
    Heap* h = (Heap*)malloc(sizeof(Heap));
    h->numOfData = 0;
    return h;
}

// 힙이 공백인지 검사
int isEmpty(Heap* h) {
    return h->numOfData == 0 ? TRUE : FALSE;
}

// 힙의 적당한 위치에 원소 x 삽입
void insertHeap(Heap* h, HData x) {
    if (h->numOfData == MAX_SIZE) {
        printf("ERROR: Heap is FULL!!\n");
        return;
    }

    // Fill your code
}

// 힙에서 키 값이 가장 큰 원소 삭제하고 반환
HData deleteHeap(Heap* h) {
    if (isEmpty(h)) {
        printf("ERROR: Heap is EMPTY!!\n");
        return 0;
    }

    HData item = h->heap[1];
    HData lastVal = h->heap[h->numOfData];
    int parentIdx = 1;
    int childIdx = 2;

    // Fill your code
}

// 부모 노드의 인덱스 값 반환
int getParentIdx(int idx) {
    return idx / 2;
}

// 왼쪽 자식 노드의 인덱스 값 반환
int getLChildIdx(int idx) {
    return idx * 2;
}

// 오른쪽 자식 노드의 인덱스 값 반환
int getRChildIdx(int idx) {
    return idx * 2 + 1;
}

void displayHeap(Heap* h) {
    int i;
    for (i = 1; i <= h->numOfData; i++)
        printf("%d %d\n", i, h->heap[i]);
}

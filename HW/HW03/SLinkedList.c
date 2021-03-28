#include "SLinkedList.h"

#include <stdio.h>
#include <stdlib.h>

linkedList* initList() {
    linkedList* L;
    L = (linkedList*)malloc(sizeof(linkedList));
    L->head = NULL;
    L->length = 0;
    return L;
}

int getLength(linkedList* L) {
    return L->length;
}

void insert(linkedList* L, listNode* pre, element x) {
    listNode* newNode;
    newNode = (listNode*)malloc(sizeof(listNode));
    newNode->data = x;

    if (L->head == NULL) {
        newNode->link = NULL;
        L->head = newNode;
    } else if (pre == NULL) {
        newNode->link = L->head;
        L->head = newNode;
    } else {
        newNode->link = pre->link;
        pre->link = newNode;
    }
    L->length++;
    // Fill your code (새 노드에 데이터 저장)

    // Fill your code (공백 리스트인 경우)

    // Fill your code (첫 번째 노드로 삽입되는 경우)

    // Fill your code (중간 노드로 삽입되는 경우)

    // Fill your code (데이터 개수 증가)
}

void insertFirst(linkedList* L, element x) {
    listNode* newNode;
    newNode = (listNode*)malloc(sizeof(listNode));
    newNode->data = x;
    newNode->link = L->head;
    L->head = newNode;
    L->length++;
}

void insertLast(linkedList* L, element x) {
    listNode *newNode, *temp;
    newNode = (listNode*)malloc(sizeof(listNode));
    // Fill your code
    newNode->data = x;
    newNode->link = NULL;  // 가장 마지막이기 때문
    if (L->head == NULL) {
        L->head = newNode;
    } else {
        temp = L->head;
        while (temp->link != NULL) {
            temp = temp->link;
        }
        temp->link = newNode;
    }
    L->length++;
}

int delete (linkedList* L, listNode* p) {
    listNode* pre;

    // Fill your code (공백 리스트인 경우)

    // Fill your code (삭제할 노드가 없는 경우)

    // Fill your code (첫 번째 노드가 삭제할 노드인 경우)

    // Fill your code (그 이외의 경우)

    // Fill your code (데이터 개수 감소)

    return TRUE;
}

listNode* search(linkedList* L, element x) {
    listNode* temp = L->head;
    while (temp != NULL) {
        if (temp->data == x) {
            return temp;
        } else {
            temp = temp->link;
        }
        return temp;
    }

    return temp;
}

void displayList(linkedList* L) {
    listNode* p;
    printf("L=(");
    p = L->head;
    while (p != NULL) {
        printf("%d", p->data);
        p = p->link;
        if (p != NULL) printf(", ");
    }
    printf(")\n");
}

void clear(linkedList* L) {
    listNode* p;
    while (L->head != NULL) {
        p = L->head;
        L->head = L->head->link;
        free(p);
        p = NULL;
    }
}

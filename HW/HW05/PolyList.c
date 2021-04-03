#include "PolyList.h"

#include <stdio.h>
#include <stdlib.h>

polyList* initList() {
    polyList* PL = (polyList*)malloc(sizeof(polyList));
    PL->head = NULL;
    PL->last = NULL;
    return PL;
}

void appendTerm(polyList* PL, float coef, int exp) {
    // Fill your code
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->coef = coef;
    newNode->exp = exp;
    newNode->link = NULL;

    if (PL->head == NULL) {  //다항식 리스트가 공백인 경우
        PL->head = newNode;
    } else {
        PL->last->link = newNode;
    }
    PL->last = newNode;
    return PL;
}

polyList* addPoly(polyList* A, polyList* B) {
    polyList* C = initList();
    Node* polyA = A->head;
    Node* polyB = B->head;
    // Fill your code
    float sumCoef;
    while (polyA && polyB) {             // 두 다핳식에 노드가 있는 동안 반복
        if (polyA->exp == polyB->exp) {  // 지수가 같은 경우
            sumCoef = polyA->coef + polyB->coef;
            appendTerm(C, sumCoef, polyA->exp);
            polyA = polyA->link;
            polyB = polyB->link;
        } else if (polyA->exp > polyB->exp) {  // A  지수가 큰 경우
            appendTerm(C, polyA->coef, polyA->exp);
            polyA = polyA->link;
        } else {  // B 지수가 큰 경우
            appendTerm(C, polyB->coef, polyB->exp);
            polyB = polyB->link;
        }
    }
    for (; polyA != NULL; polyA = polyA->link) {  // A에 남은 다항식 노드 복사
        appendTerm(C, polyA->coef, polyA->exp);
    }
    for (; polyB != NULL; polyB = polyB->link) {  // B에 남은 다항식 노드 복사
        appendTerm(C, polyB->coef, polyB->exp);
    }
    return C;
}

void displayPoly(polyList* PL) {
    Node* p = PL->head;
    for (; p; p = p->link) {
        printf("%3.0fx^%d", p->coef, p->exp);
        if (p->link != NULL)
            printf(" +");
    }
    printf("\n");
}

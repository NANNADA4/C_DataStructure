#include <stdio.h>
#include <stdlib.h>
#include "PolyList.h"

polyList* initList() {
	polyList* PL = (polyList*)malloc(sizeof(polyList));
	PL->head = NULL;
	PL->last = NULL;
	return PL;
}

void appendTerm(polyList* PL, float coef, int exp) {
	// Fill your code




}

polyList* addPoly(polyList* A, polyList* B) {
	polyList* C = initList();
	Node* polyA = A->head;
	Node* polyB = B->head;
	
	// Fill your code



	
	return C;
}

void displayPoly(polyList* PL) {
	Node* p = PL->head;
	for(; p; p=p->link) {
		printf("%3.0fx^%d", p->coef, p->exp);
		if(p->link != NULL)
			printf(" +");
	}
	printf("\n");
}

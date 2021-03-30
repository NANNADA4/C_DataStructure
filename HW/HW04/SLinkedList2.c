#include <stdio.h>
#include <stdlib.h>
#include "SLinkedList2.h"

linkedList* initList() {
	linkedList* L;
	L = (linkedList*)malloc(sizeof(linkedList));
	L->head = NULL;
	L->length = 0;
	return L;
}

int getLength(linkedList* L) {		// SLinkedList.c와 동일
	// Fill your code

}

void insert(linkedList* L, listNode* pre, element x) {	// SLinkedList.c와 동일
	listNode* newNode;
	newNode = (listNode*)malloc(sizeof(listNode));
	// Fill your code (새 노드에 데이터 저장)
	
	
	// Fill your code (공백 리스트인 경우)
	


	// Fill your code (첫 번째 노드로 삽입되는 경우)



	// Fill your code (중간 노드로 삽입되는 경우)



	// Fill your code (데이터 개수 증가)

}

void insertFirst(linkedList* L, element x) {	// SLinkedList.c와 동일
	listNode* newNode;
	newNode = (listNode*)malloc(sizeof(listNode));
	// Fill your code



}

void insertLast(linkedList* L, element x) {	// SLinkedList.c와 동일
	listNode *newNode, *temp;
	newNode = (listNode*)malloc(sizeof(listNode));
	// Fill your code





}

int delete(linkedList* L, listNode* p) {		// SLinkedList.c와 동일
	listNode* pre;
	
	// Fill your code (공백 리스트인 경우)
	
	// Fill your code (삭제할 노드가 없는 경우)
	
	// Fill your code (첫 번째 노드가 삭제할 노드인 경우)




	// Fill your code (그 이외의 경우)






	// Fill your code (데이터 개수 감소)
	

	return TRUE;
}

listNode* search(linkedList* L, element x) {	// SLinkedList.c와 동일
	listNode* temp = L->head;
	
	// Fill your code





	return temp;
}

void displayList(linkedList* L) {
	listNode* p;
	printf("L=(");
	p = L->head;
	while(p != NULL) {
		printf("%s", p->data);
		p = p->link;
		if(p != NULL) printf(", ");
	}
	printf(")\n");
}

void clear(linkedList* L) {
	listNode* p;
	while(L->head != NULL) {
		p = L->head;
		L->head = L->head->link;
		free(p);
		p = NULL;
	}
}

void reverse(linkedList* L) {
	// Fill your code






}

#include <stdio.h>
#include <stdlib.h>
#include "Deque.h"

// ���鵦 ����
Deque* create() {
	Deque* DQ = (Deque*)malloc(sizeof(Deque));
	DQ->front = NULL;
	DQ->rear = NULL;
	return DQ;
}

// ���� ��ȭ�������� Ȯ���ϴ� ����					
int isFull(Deque* DQ) {
	// Fill your code

}

// ���� ����������� Ȯ���ϴ� ����				
int isEmpty(Deque* DQ) {
	// Fill your code

}

// ���� �Ӹ��� ��� �߰��ϴ� ����			
void insertFront(Deque* DQ, element x) {
	// Fill your code




}

// ���� ������ ��� �߰��ϴ� ����
void insertRear(Deque* DQ, element x) {
	// Fill your code




}

// ���� �Ӹ��� ��ġ�� ��� ���� �� ��ȯ�ϴ� ����	
element deleteFront(Deque* DQ) {
	// Fill your code




}

// ���� ������ ��ġ�� ��� ���� �� ��ȯ�ϴ� ���� 		
element deleteRear(Deque* DQ) {
	// Fill your code




}

// ���� �Ӹ��� ��ġ�� ��� ��ȯ�ϴ� ����. ���� X		
element getFront(Deque* DQ) {
	// Fill your code




}

// ���� ������ ��ġ�� ��� ��ȯ�ϴ� ����. ���� X		
element getRear(Deque* DQ) {
	// Fill your code




}	

// ���� ��� ��� ���		
void displayDeque(Deque* DQ) {
	dequeNode* p = DQ->front;
	printf("Deque [ ");
	while(p) {
		printf("%d ", p->data);
		p = p->rlink;
	}
	printf(" ]\n");
}

// �� ���� 	
void clear(Deque* DQ) {
	dequeNode* p;
	while(DQ->front) {
		p = DQ->front;
		DQ->front = DQ->front->rlink;
		free(p);
		p = NULL;
	}
}				

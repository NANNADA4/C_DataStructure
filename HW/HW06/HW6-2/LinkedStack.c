#include <stdio.h>
#include <stdlib.h>
#include "LinkedStack.h"

// ���齺�� ����
Stack* create() {
	Stack* S = (Stack*)malloc(sizeof(Stack));
	S->top = NULL;
	return S;
}

// ������ ��ȭ�������� Ȯ���ϴ� ����					
int isFull(Stack* S) {
	// Fill your code

}

// ������ ����������� Ȯ���ϴ� ����			
int isEmpty(Stack* S) {
	// Fill your code

}

// ������ top�� ��Ҹ� �߰��ϴ� ����			
void push(Stack* S, element x) {
	// Fill your code




}

// ���ÿ��� �������� ����� ��� ���� �� ��ȯ�ϴ� ����	
element pop(Stack* S) {
	// Fill your code






}

// ���ÿ��� �������� ����� ��Ҹ� ��ȯ�ϴ� ����			
element peek(Stack* S) {
	// Fill your code





}

// ������ ��� ��� ��� 			
void displayStack(Stack* S) {
	stackNode* p = S->top;
	printf("STACK [ ");
	while(p) {
		printf("%d ", p->data);
		p = p->link;
	}
	printf(" ]\n");
}

// ���� ����
void clear(Stack* S) {
	stackNode* p;
	while(S->top) {
		p = S->top;
		S->top = S->top->link;
		free(p);
		p = NULL;
	}
}				



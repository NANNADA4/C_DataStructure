#include <stdio.h>
#include <stdlib.h>
#include "Heap.h"

// ���� �� ����
Heap* createHeap() {
	Heap* h = (Heap*)malloc(sizeof(Heap));
	h->numOfData = 0;
	return h;
}	

// ���� �������� �˻�			
int isEmpty(Heap* h) {
	return h->numOfData == 0 ? TRUE : FALSE;
}	

// ���� ������ ��ġ�� ���� x ����	
void insertHeap(Heap* h, HData x) {
	if(h->numOfData == MAX_SIZE) {
		printf("ERROR: Heap is FULL!!\n");
		return;
	}
	
	// Fill your code 





}

// ������ Ű ���� ���� ū ���� �����ϰ� ��ȯ
HData deleteHeap(Heap* h) {
	if(isEmpty(h)) {
		printf("ERROR: Heap is EMPTY!!\n");
		return 0;
	}
	
	HData item = h->heap[1];
	HData lastVal = h->heap[h->numOfData];
	int parentIdx = 1;
	int childIdx = 2;
	
	// Fill your code





}			

// �θ� ����� �ε��� �� ��ȯ
int getParentIdx(int idx) {
	return idx/2;
}	

// ���� �ڽ� ����� �ε��� �� ��ȯ		
int getLChildIdx(int idx) {
	return idx*2;
}

// ������ �ڽ� ����� �ε��� �� ��ȯ			
int getRChildIdx(int idx) {
	return idx*2+1;
}

void displayHeap(Heap* h) {
	int i;
	for(i=1; i<=h->numOfData; i++)
		printf("%d %d\n", i, h->heap[i]);
}	

#include <stdio.h>
#include <stdlib.h>
#include "ArrayGraph.h"

// ���� �׷����� �����ϴ� ����
Graph* createGraph(int type) {
	int i, j;
	Graph* G = (Graph*)malloc(sizeof(Graph));	
	G->n = 0;
	G->type = type;
	for(i=0; i<MAX_SIZE; i++) {
		for(j=0; j<MAX_SIZE; j++)
			G->adjMatrix[i][j] = 0;
	}
	return G;
}

// �׷����� �������� �˻�	
int isEmpty(Graph* G) {
	return G->n == 0;
}

// �׷��� G�� ���� v�� ����
void insertVertex(Graph* G, int v) {
	if((G->n)+1 > MAX_SIZE) {
		printf("[ERROR] �׷��� ������ ���� �ʰ�\n");
		return;
	}
	G->n++;
}

// �׷��� G�� ����(u, v)�� ����
void insertEdge(Graph* G, int u, int v) {
	// Fill your code

	
}

// �׷��� G�� ���� v�� �����ϰ� ����� ��� ���� ����
void deleteVertex(Graph* G, int v) {
	// Fill your code

	
}

// �׷��� G�� ���� (u, v)�� ����
void deleteEdge(Graph* G, int u, int v) {
	// Fill your code
}

// �׷��� G�� ���ҽ� ����
void destroyGraph(Graph* G) {
	int i, j;
	for(i=0; i<G->n; i++) {
		for(j=0; j<G->n; j++)
			G->adjMatrix[i][j] = 0;
	}
	G->n = 0;
}

// �׷��� G�� ���� ��� ���� ���
void displayGraph(Graph* G) {
	int i, j;
	for(i=0; i<G->n; i++) {
		for(j=0; j<G->n; j++)
			printf("%2d\t", G->adjMatrix[i][j]);
		printf("\n");
	}
}

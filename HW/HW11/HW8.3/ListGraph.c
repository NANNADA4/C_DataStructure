#include <stdio.h>
#include <stdlib.h>
#include "ListGraph.h"
#include "LinkedStack.h"
#include "LinkedQueue.h"

// ���� �׷����� �����ϴ� ����
Graph* createGraph(int type) {
	int i;
	Graph* G = (Graph*)malloc(sizeof(Graph));	
	G->n = 0;
	G->type = type;
	for(i=0; i<MAX_SIZE; i++) {
		G->adjList_H[i] = NULL;
		G->visited[i] = FALSE;
		G->pred[i] = -1;
	}
	return G;
}

// �׷����� �������� �˻�	
int isEmptyGraph(Graph* G) {
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
	// Fill your code (HW8.2) 
	


}

// �׷��� G�� ���ҽ� ����
void destroyGraph(Graph* G) {
	int i;
	for(i=0; i<G->n; i++) {
		if(G->adjList_H[i] != NULL)
			free(G->adjList_H[i]);
	}
	free(G);
}

// �׷��� G�� ���� ����Ʈ ���� ���
void displayGraph(Graph* G) {
	int i;
	graphNode* p;
	for(i=0; i<G->n; i++) {
		printf("���� %d�� ��������Ʈ", i);
		p = G->adjList_H[i];
		while(p) {
			printf(" -> %d ", p->vertex);
			p = p->link;
		}			
		printf("\n");
	}
}

// visited[], pred[] �ʱ�ȭ 
void initSearch(Graph* G) {
	int i;
	for(i=0; i<G->n; i++) {
		G->visited[i] = FALSE;
		G->pred[i] = -1;
	}
}

// ���� �켱 Ž�� iterative version
void dfs_iter(Graph* G, int v) {
	// Fill your code (HW8.3)
	


}	

// ���� �켱 Ž�� recursive version
void dfs_recur(Graph* G, int v)	{
	// Fill your code (HW8.3)
	


}

// �ʺ� �켱 Ž��
void bfs(Graph* G, int v) {
	// Fill your code (HW8.3) 
	


}		

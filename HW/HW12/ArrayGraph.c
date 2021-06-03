#include <stdio.h>
#include <stdlib.h>
#include "ArrayGraph.h"
#include "ArrayStack.h"

// ���� �׷����� �����ϴ� ����
Graph* createGraph() {
	int i, j;
	Graph* G = (Graph*)malloc(sizeof(Graph));	
	G->n = 0;
	for(i=0; i<MAX_SIZE; i++) {
		for(j=0; j<MAX_SIZE; j++) {
			if(i==j)
				G->cost[i][j] = 0;
			else
				G->cost[i][j] = INF;
			G->A[i][j] = INF;
		}
		G->dist[i] = INF;
		G->pred[i] = NONE;
		G->S[i] = 0;
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
void insertEdge(Graph* G, int u, int v, int weight) {
	G->cost[u][v] = weight;	
}

// �׷��� G�� ���� v�� �����ϰ� ����� ��� ���� ����
void deleteVertex(Graph* G, int v) {
	int i;
	for(i=0; i<G->n; i++) {
		G->cost[i][v] = INF;
		G->cost[v][i] = INF;
	}	
}

// �׷��� G�� ���� (u, v)�� ����
void deleteEdge(Graph* G, int u, int v) {
	G->cost[u][v] = INF;
}

// �׷��� G�� ���ҽ� ����
void destroyGraph(Graph* G) {
	int i, j;
	for(i=0; i<G->n; i++) {
		for(j=0; j<G->n; j++) {
			if(i != j)
				G->cost[i][j] = INF;
	}
		G->dist[i] = INF;
		G->pred[i] = NONE;
	}
	G->n = 0;
}

// �׷��� G�� ���� ��� ���� ���
void displayGraph(Graph* G) {
	int i, j;
	for(i=0; i<G->n; i++) {
		for(j=0; j<G->n; j++){
			if(G->cost[i][j] == INF)
				printf("INF\t");
			else
				printf("%2d\t", G->cost[i][j]);
		}			
		printf("\n");
	}
}

// �ּ� ����� ���� ���� ������ ã�� ����
// Dijkstra Algorithm ������ �ʿ��� ��� �̿� 
int nextVertex(Graph* G) {
	int i, minCost, minVertex;
	minCost = INF;
	minVertex = -1;
	for(i=0; i<G->n; i++) {
		if(G->dist[i] < minCost && !G->S[i]) {
			minCost = G->dist[i];
			minVertex = i;
		}
	}
	return minVertex;
}	

// Dijkstra Algorithm
void dijkstra(Graph* G, int v) {
	// Fill your code
	


}

// Bellman-Ford Algorithm
int bellmanFord(Graph* G, int v) {
	// Fill your code
	


}	

// Floyd-Warshall Algorithm
void floyd(Graph* G){
	// Fill your code
	


}	

// �ִܰ�� ���
void printShortestPath(Graph* G, int src, int dst) {
	printf("%c -> %c �ִ� ���: %c", src+65, dst+65, src+65);
	int v = dst;
	Stack* stack = createStack();

	// Fill your code





	printf("\n");
	clearStack(stack);
}	

// �ִܰ�� ��� ���
int printShortestPathCost(Graph* G, int src, int dst) {
	printf("%c -> %c �ִ� ��� ���: %d\n", src+65, dst+65, G->dist[dst]);
}

// ��� ���� �� ������ �ִ� ��� ��� ��� 
void printAllPairShortestCost(Graph* G) {
	int i, j;
	
	for(i=0; i<G->n; i++) {
		for(j=0; j<G->n; j++) {
			if(G->A[i][j] == INF)
				printf("INF\t");
			else
				printf("%2d\t", G->A[i][j]);
		}			
		printf("\n");
	}
}		

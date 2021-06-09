#include "ArrayGraph.h"

#include <stdio.h>
#include <stdlib.h>

#include "ArrayStack.h"

// 공백 그래프를 생성하는 연산
Graph* createGraph() {
    int i, j;
    Graph* G = (Graph*)malloc(sizeof(Graph));
    G->n = 0;
    for (i = 0; i < MAX_SIZE; i++) {
        for (j = 0; j < MAX_SIZE; j++) {
            if (i == j)
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

// 그래프가 공백인지 검사
int isEmpty(Graph* G) {
    return G->n == 0;
}

// 그래프 G에 정점 v를 삽입
void insertVertex(Graph* G, int v) {
    if ((G->n) + 1 > MAX_SIZE) {
        printf("[ERROR] 그래프 정점의 개수 초과\n");
        return;
    }
    G->n++;
}

// 그래프 G에 간선(u, v)를 삽입
void insertEdge(Graph* G, int u, int v, int weight) {
    G->cost[u][v] = weight;
}

// 그래프 G에 정점 v를 삭제하고 연결된 모든 간선 삭제
void deleteVertex(Graph* G, int v) {
    int i;
    for (i = 0; i < G->n; i++) {
        G->cost[i][v] = INF;
        G->cost[v][i] = INF;
    }
}

// 그래프 G에 간선 (u, v)를 삭제
void deleteEdge(Graph* G, int u, int v) {
    G->cost[u][v] = INF;
}

// 그래프 G의 리소스 해제
void destroyGraph(Graph* G) {
    int i, j;
    for (i = 0; i < G->n; i++) {
        for (j = 0; j < G->n; j++) {
            if (i != j)
                G->cost[i][j] = INF;
        }
        G->dist[i] = INF;
        G->pred[i] = NONE;
    }
    G->n = 0;
}

// 그래프 G의 인접 행렬 정보 출력
void displayGraph(Graph* G) {
    int i, j;
    for (i = 0; i < G->n; i++) {
        for (j = 0; j < G->n; j++) {
            if (G->cost[i][j] == INF)
                printf("INF\t");
            else
                printf("%2d\t", G->cost[i][j]);
        }
        printf("\n");
    }
}

// 최소 비용을 갖는 다음 정점을 찾는 연산
// Dijkstra Algorithm 구현시 필요할 경우 이용
int nextVertex(Graph* G) {
    int i, minCost, minVertex;
    minCost = INF;
    minVertex = -1;
    for (i = 0; i < G->n; i++) {
        if (G->dist[i] < minCost && !G->S[i]) {
            minCost = G->dist[i];
            minVertex = i;
        }
    }
    return minVertex;
}

// Dijkstra Algorithm
void dijkstra(Graph* G, int v) {
    // Fill your code
    int i, u, w;

    for (i = 0; i < v; i++) {
        G->pred[i] = G->cost[v][i];
        if (G->cost[v][i] != INF) {
            G->pred[i] = v;
        } else {
            G->pred[i] = NULL;
        }
    }

    for (i = 0; i < v - 1; i++) {
        u = nextVertex(G);
        for (w = 0; w < v; w++) {
            if (!G->S[i]) {
                G->dist[w] = G->dist[u] + G->cost[u][w];
                G->pred[w] = u;
            }
        }
    }
}

// Bellman-Ford Algorithm
int bellmanFord(Graph* G, int v) {
    // Fill your code
    int i, u;

    for (i = 0; i < v - 1; i++) {
        for (u = 0; u < v - 1; i++) {
            if (G->dist[i] > G->dist[u] + G->cost[i][v]) {
                G->dist[i] = G->dist[u] + G->cost[i][v];
            }
        }
    }
    for (i = 0; i < v - 1; i++) {
        for (u = 0; u < v - 1; i++) {
            if (G->dist[i] > G->dist[u] + G->cost[u][v]) {
                return FALSE;
            }
        }
    }
    return TRUE;
}

// Floyd-Warshall Algorithm
void floyd(Graph* G) {
    // Fill your code
    int i, j, k;
    int A[i][j];
    int n = G->n;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1; j++) {
            A[i][j] = G->cost[i][j];
        }
    }

    for (k = 0; k < n - 1; k++) {
        for (i = 0; i < n - 1; i++) {
            for (j = 0; j < n - 1; j++) {
                if (A[i][k] + A[k][j] < A[i][j]) {
                    A[i][j] = A[i][k] + A[k][j];
                }
            }
        }
    }
}

// 최단경로 출력
void printShortestPath(Graph* G, int src, int dst) {
    printf("%c -> %c 최단 경로: %c", src + 65, dst + 65, src + 65);
    int v = dst;
    Stack* stack = createStack();

    // Fill your code

    printf("\n");
    clearStack(stack);
}

// 최단경로 비용 출력
int printShortestPathCost(Graph* G, int src, int dst) {
    printf("%c -> %c 최단 경로 비용: %d\n", src + 65, dst + 65, G->dist[dst]);
}

// 모든 정점 쌍 사이의 최단 경로 비용 출력
void printAllPairShortestCost(Graph* G) {
    int i, j;

    for (i = 0; i < G->n; i++) {
        for (j = 0; j < G->n; j++) {
            if (G->A[i][j] == INF)
                printf("INF\t");
            else
                printf("%2d\t", G->A[i][j]);
        }
        printf("\n");
    }
}

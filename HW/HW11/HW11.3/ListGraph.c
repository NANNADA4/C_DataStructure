#include "ListGraph.h"

#include <stdio.h>
#include <stdlib.h>

#include "LinkedQueue.h"
#include "LinkedStack.h"

// 공백 그래프를 생성하는 연산
Graph* createGraph(int type) {
    int i;
    Graph* G = (Graph*)malloc(sizeof(Graph));
    G->n = 0;
    G->type = type;
    for (i = 0; i < MAX_SIZE; i++) {
        G->adjList_H[i] = NULL;
        G->visited[i] = FALSE;
        G->pred[i] = -1;
    }
    return G;
}

// 그래프가 공백인지 검사
int isEmptyGraph(Graph* G) {
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
void insertEdge(Graph* G, int u, int v) {
    if (G->type == DIRECT) {
        graphNode* node;

        node = (graphNode*)malloc(sizeof(graphNode));
        node->vertex = v;
        node->link = G->adjList_H[u];
        G->adjList_H[u] = node;
    } else {
        graphNode* node;

        node = (graphNode*)malloc(sizeof(graphNode));
        node->vertex = v;
        node->link = G->adjList_H[u];
        G->adjList_H[u] = node;

        node = (graphNode*)malloc(sizeof(graphNode));
        node->vertex = u;
        node->link = G->adjList_H[v];
        G->adjList_H[v] = node;
    }
}

// 그래프 G의 리소스 해제
void destroyGraph(Graph* G) {
    int i;
    for (i = 0; i < G->n; i++) {
        if (G->adjList_H[i] != NULL)
            free(G->adjList_H[i]);
    }
    free(G);
}

// 그래프 G의 인접 리스트 정보 출력
void displayGraph(Graph* G) {
    int i;
    graphNode* p;
    for (i = 0; i < G->n; i++) {
        printf("정점 %d의 인접리스트", i);
        p = G->adjList_H[i];
        while (p) {
            printf(" -> %d ", p->vertex);
            p = p->link;
        }
        printf("\n");
    }
}

// visited[], pred[] 초기화
void initSearch(Graph* G) {
    int i;
    for (i = 0; i < G->n; i++) {
        G->visited[i] = FALSE;
        G->pred[i] = -1;
    }
}

// 깊이 우선 탐색 iterative version
void dfs_iter(Graph* G, int v) {
    // Fill your code(HW8 .3)
    Stack* S = createStack();

    G->visited[v] = TRUE;
    push(S, v);
    visit(v);

    while (!isStackEmpty(S)) {
        v = Stackpop(S);
        graphNode* w = G->adjList_H[v];
        while (w != NULL) {
            if (G->visited[G->n] == 0) {
                push(S, v);
                G->visited[w->vertex] = TRUE;
                visit(w->vertex);
                v = w->vertex;
                w = G->adjList_H[v];
            } else {
                w = w->link;
            }
        }
    }
}

// 깊이 우선 탐색 recursive version
void dfs_recur(Graph* G, int v) {
    G->visited[v] = TRUE;
    for (graphNode* w = G->adjList_H[v]; w != NULL; w = w->link) {
        if (G->visited[G->n] == 0) {
            dfs_recur(G, G->n);
        }
    }
}

// 너비 우선 탐색
void bfs(Graph* G, int v) {
    Queue* Q = create();
    G->visited[v] = TRUE;
    enqueue(Q, v);
    visit(v);
    while (!isEmpty(Q)) {
        v = dequeue(Q);
        for (graphNode* w = G->adjList_H[v]; w != NULL; w = w->link) {
            if (G->visited[G->n] == 0) {
                enqueue(Q, w->vertex);
                G->visited[w->vertex] = TRUE;
                visit(w->vertex);
            }
        }
    }
}

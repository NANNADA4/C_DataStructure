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
    int chk_redup;
    graphNode *node, *head;

    chk_redup = 0;  // flag 값처럼 0 : 추가, 1 : 추가안함
    head = G->adjList_H[u];
    while (head != NULL) {
        if (head->vertex == v) {
            chk_redup = 1;
            break;
        }
        head = head->link;
    }
    if (chk_redup == 0) {
        node = (graphNode*)malloc(sizeof(graphNode));
        node->vertex = v;
        node->link = G->adjList_H[u];
        G->adjList_H[u] = node;
    }

    if (G->type == UNDIRECT) {
        chk_redup = 0;
        head = G->adjList_H[v];
        while (head != NULL) {
            if (head->vertex == u) {
                chk_redup = 1;
                break;
            }
            head = head->link;
        }
        if (chk_redup == 0) {
            node = (graphNode*)malloc(sizeof(graphNode));
            node->vertex = u;
            node->link = G->adjList_H[v];
            G->adjList_H[v] = node;
        }
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
    graphNode* node;

    if (!G || !(v < G->n)) {
        return;
    }

    Stack* stack = createStack();
    int vertex = v;
    G->visited[vertex] = TRUE;
    printf("%d\t", vertex);

    while (1) {
        node = G->adjList_H[vertex];
        while (node && G->visited[node->vertex]) {
            node = node->link;
        }
        if (node == NULL) {
            if (isStackEmpty(stack)) {
                break;
            }
            vertex = Stackpop(stack);
        } else {
            push(stack, vertex);
            vertex = node->vertex;
            G->visited[vertex] = TRUE;
            printf("%d\t", vertex);
        }
    }
    Stackclear(stack);
}

// 깊이 우선 탐색 recursive version
void dfs_recur(Graph* G, int v) {
    graphNode* node;
    int i;

    if (!G || !(v < G->n)) {
        return;
    }
    G->visited[v] = TRUE;
    printf("%d\t", v);

    for (node = G->adjList_H[v]; node != NULL; node = node->link) {
        if (!G->visited[node->vertex]) {
            dfs_recur(G, node->vertex);
        }
    }
}

// 너비 우선 탐색
void bfs(Graph* G, int v) {
    graphNode* node;

    if (!G || !(v < G->n)) {
        return;
    }

    Queue* queue = createQueue();
    int vertex = v;
    G->visited[vertex] = TRUE;

    while (1) {
        printf("%d\t", vertex);
        node = G->adjList_H[vertex];
        while (node) {
            if (!G->visited[node->vertex]) {
                enqueue(queue, node->vertex);
                G->visited[node->vertex] = TRUE;
            }
            node = node->link;
        }
        if (isEmpty(queue)) {
            break;
        }
        vertex = dequeue(queue);
    }
    clearQueue(queue);
}

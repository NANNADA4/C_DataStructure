#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100  // �迭�� �ִ� ũ��

typedef int element;
typedef struct {
    element list[MAX_SIZE];  // �迭 ����
    int length;              // ���� �迭�� ����� �ڷ���� ����
} ArrayListType;

// ���� ó�� �Լ�
void error(char *message) {
    printf("%s\n", message);
}

// ����Ʈ �ʱ�ȭ
void init(ArrayListType *L) {
    L->length = 0;
}

// �� ����Ʈ �˻�
// ����Ʈ�� ��� ������ 1�� ��ȯ
// �׷��� ������ 0�� ��ȯ
int isEmpty(ArrayListType *L) {
    return L->length == 0;
}

// ����Ʈ�� ��ȭ������ �˻�
// ����Ʈ�� ������ ������ 1�� ��ȯ
// �׷��� ������ 0�� ��ȯ
int isFull(ArrayListType *L) {
    return L->length == MAX_SIZE;
}

// ����Ʈ�� ��� ��� ���
void display(ArrayListType *L) {
    int i;
    printf("===Print Lists===\n");
    for (i = 0; i < L->length; i++)
        printf("ArrayList[%d]: %d\n", i, L->list[i]);
}

// ���� �Լ�
// pos: �����ϰ��� �ϴ� ��ġ
// item: �����ϰ��� �ϴ� �ڷ�
void insert(ArrayListType *L, int pos, element item) {
    // Fill your code
    int i;
    if (isFull(L)) {
        error("list is full\r\n");
    } else if ((pos < 0) || (pos > L->length)) {
        error("index error \r\n");
    } else {
        for (i = (L->length - 1); i >= pos; i--) {
            L->list[i + 1] = L->list[i];
        }
        L->list[pos] = item;
        printf("ArrayList[%d]에 %d 삽입\n", pos, item);
        L->length++;
    }
}

// ����Ʈ �� �տ� ��� ����
void insertFirst(ArrayListType *L, element item) {
    // Fill your code
    int i;
    for (i = (L->length - 1); i >= 0; i--) {
        L->list[i + 1] = L->list[i];
    }
    L->list[0] = item;
    printf("ArrayList[0]에 %d 삽입\n", item);
    L->length++;
}

// ����Ʈ �� ���� ��� ����
void insertLast(ArrayListType *L, element item) {
    // Fill your code
}

// ���� �Լ�
// pos: �����ϰ��� �ϴ� ��ġ
// ��ȯ��: �����Ǵ� �ڷ�
element delete (ArrayListType *L, int pos) {
    // Fill your code
}

// ����Ʈ�� ��� ��� ����
void clear(ArrayListType *L) {
    // Fill your code
}

// pos ��ġ�� ��Ҹ� item���� ��ü
void replace(ArrayListType *L, int pos, element item) {
    // Fill your code
}

// item�� ����Ʈ�� �ִ��� �˻�
// ����Ʈ�� ������ 1�� ��ȯ
// �׷��� ������ 0�� ��ȯ
int isList(ArrayListType *L, element item) {
    // Fill your code
}

// pos ��ġ�� ��Ҹ� ��ȯ
element getItem(ArrayListType *L, int pos) {
    // Fill your code
}

// ����Ʈ�� ����(�׸��� ����)�� ����
int getLength(ArrayListType *L) {
    // Fill your code
}

int main() {
    ArrayListType *plist;

    // ListType�� �������� �����ϰ� ListType�� ����Ű��
    // �����͸� �Լ��� �Ķ���ͷ� �����Ѵ�.
    plist = (ArrayListType *)malloc(sizeof(ArrayListType));
    init(plist);
    insert(plist, 0, 10);
    insert(plist, 0, 20);
    insertFirst(plist, 5);
    insertLast(plist, 30);
    insert(plist, -1, 3);
    display(plist);

    delete (plist, 2);
    display(plist);

    replace(plist, 1, 50);
    display(plist);
    free(plist);

    return 0;
}

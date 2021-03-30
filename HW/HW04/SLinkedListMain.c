#include <stdio.h>

#include "SLinkedList.h"

int main() {
    linkedList* L;
    listNode* p;

    printf("(1)���鸮��Ʈ �����ϱ�\n");
    L = initList();
    displayList(L);

    printf("\n(2)����Ʈ�� 10, 50, 80 ��带 ������� �����ϱ�\n");
    // Fill your code
    insertLast(L, 10);
    insertLast(L, 50);
    insertLast(L, 80);
    printf("����Ʈ�� ����� ������ ���� : %d\n", L->length);

    printf("\n(3)����Ʈ���� 50 ��� Ž���ϱ�\n");
    p = search(L, 50);
    if (p == NULL) {
        printf("ã�� �����Ͱ� �����ϴ�. \n");
    } else {
        printf("%d ��带 ã�ҽ��ϴ� \n", p->data);
    }

    printf("\n(4)50 ��� �ڿ� 60 ��� �����ϱ�\n");
    // Fill your code

    printf("\n(5)����Ʈ���� 80 ��� �����ϱ�\n");
    // Fill your code

    clear(L);

    return 0;
}

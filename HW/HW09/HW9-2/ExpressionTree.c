#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "BinaryTree.h"
#include "LinkedStack.h"

BinTree* createExpTree(char exp[]) {
	Stack* S = createStack();
	BinTree* bNode;
	int expLen = strlen(exp);
	int i;
	
	// Fill your code



}

int evalExpTree(BinTree* bt) {
	int op1, op2;
	
	// Fill your code



	

}

void showNodeData(int x) {
	if(0<=x && x<=9)			// �ǿ����� ��� 
		printf("%d ", x);
	else						// ������ ��� 
		printf("%c ", x);
}

void showPrefixExp(BinTree* bt) {
	// Fill your code

}

void showInfixExp(BinTree* bt) {
	if(bt == NULL)
		return;
	
	if(bt->left != NULL || bt->right != NULL)
		printf(" ( ");
	
	showInfixExp(bt->left);		// ù ��° �ǿ����� ���
	showNodeData(bt->data);		// ������ ���
	showInfixExp(bt->right);	// �� ��° �ǿ����� ���
	
	if(bt->left != NULL || bt->right != NULL)
		printf(" ) "); 
}

void showPostfixExp(BinTree* bt) {
	// Fill your code

}

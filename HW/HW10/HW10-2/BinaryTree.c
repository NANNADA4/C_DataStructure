#include <stdio.h>
#include <stdlib.h>
#include "BinaryTree.h"

// ���� ���� Ʈ�� ���� ����
BinTree* createBT(){
	BinTree* bt = (BinTree*)malloc(sizeof(BinTree));
	bt->key = EMPTY;
	bt->left = NULL;
	bt->right = NULL;
	return bt;
}

// ���� Ʈ���� ����ִ��� �˻��ϴ� ����
int isBTEmpty(BinTree* bt) {
	if(bt->left == NULL && bt->right == NULL && bt->key == EMPTY)
		return TRUE;
	else
		return FALSE;
}

// ���� ����Ʈ���� bt1, ������ ����Ʈ���� bt2, x���� ������ ��带 ��Ʈ�� �ϴ� ����Ʈ�� ��ȯ
BinTree* makeBT(BinTree* bt1, BTData x, BinTree* bt2) {
	BinTree* bt = (BinTree*)malloc(sizeof(BinTree));
	bt->key = x;
	bt->left = bt1;
	bt->right = bt2;
	return bt;
}

// bt2�� bt1�� ���� ����Ʈ���� ����
void makeLSubtree(BinTree* bt1, BinTree* bt2) {
	// Fill your code
	// HW #7.1

}

// bt2�� bt1�� ������ ����Ʈ���� ����
void makeRSubtree(BinTree* bt1, BinTree* bt2) {
	// Fill your code
	// HW #7.1

}

// bt�� ���� ����Ʈ���� ��ȯ
BinTree* getLSubtree(BinTree* bt) {
	// Fill your code
	// HW #7.1

}

// bt�� ������ ����Ʈ���� ��ȯ
BinTree* getRSubtree(BinTree* bt) {
	// Fill your code
	// HW #7.1

}

// bt�� root ��忡 x �� ����
void setData(BinTree* bt, BTData x) {
	// Fill your code
	// HW #7.1

}

// bt�� root�� ����� �����͸� ��ȯ
BTData getData(BinTree* bt) {
	// Fill your code
	// HW #7.1

}

// bt�� ����Ű�� ��带 ��Ʈ�� �ϴ� Ʈ�� ���� �Ҹ�
void deleteBT(BinTree* bt) {
	if(bt == NULL)
		return;
	
	deleteBT(bt->left);
	deleteBT(bt->right);
	
	printf("delete tree data: %d \n", bt->key);
	free(bt);
}

// ���� ��ȸ 
void InorderTraverse(BinTree* bt, visitFuncPtr action) {
	// Fill your code
	// HW #7.1

}

// ���� ��ȸ
void PreorderTraverse(BinTree* bt, visitFuncPtr action) {
	// Fill your code
	// HW #7.1

}

// ���� ��ȸ
void PostorderTraverse(BinTree* bt, visitFuncPtr action) {
	// Fill your code
	// HW #7.1

}

// ������ x�� ����� ��� Ž��
BinTree* searchBST(BinTree* bt, BTData x) {
	BinTree* p = bt;
	
	// Fill your code
	



}

// ������ x ����
void insertBST(BinTree* bt, BTData x) {
	BinTree* p = bt;
	BinTree* parent = NULL;	
	
	// ������ ��� Ž��
	// Fill your code
	



	// ������ ��� ����
	// Fill your code
	



	
	// ���� ��� ����
	// Fill your code





}

// ������ x ��� ����	
void deleteBST(BinTree* bt, BTData x) {
	// Fill your code
	



}	


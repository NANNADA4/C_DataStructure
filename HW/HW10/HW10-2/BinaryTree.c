#include <stdio.h>
#include <stdlib.h>
#include "BinaryTree.h"

// 공백 이진 트리 생성 연산
BinTree* createBT(){
	BinTree* bt = (BinTree*)malloc(sizeof(BinTree));
	bt->key = EMPTY;
	bt->left = NULL;
	bt->right = NULL;
	return bt;
}

// 이진 트리가 비어있는지 검사하는 연산
int isBTEmpty(BinTree* bt) {
	if(bt->left == NULL && bt->right == NULL && bt->key == EMPTY)
		return TRUE;
	else
		return FALSE;
}

// 왼쪽 서브트리가 bt1, 오른쪽 서브트리가 bt2, x값을 가지는 노드를 루트로 하는 이진트리 반환
BinTree* makeBT(BinTree* bt1, BTData x, BinTree* bt2) {
	BinTree* bt = (BinTree*)malloc(sizeof(BinTree));
	bt->key = x;
	bt->left = bt1;
	bt->right = bt2;
	return bt;
}

// bt2를 bt1의 왼쪽 서브트리로 연결
void makeLSubtree(BinTree* bt1, BinTree* bt2) {
	// Fill your code
	// HW #7.1

}

// bt2를 bt1의 오른쪽 서브트리로 연결
void makeRSubtree(BinTree* bt1, BinTree* bt2) {
	// Fill your code
	// HW #7.1

}

// bt의 왼쪽 서브트리를 반환
BinTree* getLSubtree(BinTree* bt) {
	// Fill your code
	// HW #7.1

}

// bt의 오른쪽 서브트리를 반환
BinTree* getRSubtree(BinTree* bt) {
	// Fill your code
	// HW #7.1

}

// bt의 root 노드에 x 값 저장
void setData(BinTree* bt, BTData x) {
	// Fill your code
	// HW #7.1

}

// bt의 root에 저장된 데이터를 반환
BTData getData(BinTree* bt) {
	// Fill your code
	// HW #7.1

}

// bt가 가리키는 노드를 루트로 하는 트리 전부 소멸
void deleteBT(BinTree* bt) {
	if(bt == NULL)
		return;
	
	deleteBT(bt->left);
	deleteBT(bt->right);
	
	printf("delete tree data: %d \n", bt->key);
	free(bt);
}

// 중위 순회 
void InorderTraverse(BinTree* bt, visitFuncPtr action) {
	// Fill your code
	// HW #7.1

}

// 전위 순회
void PreorderTraverse(BinTree* bt, visitFuncPtr action) {
	// Fill your code
	// HW #7.1

}

// 후위 순회
void PostorderTraverse(BinTree* bt, visitFuncPtr action) {
	// Fill your code
	// HW #7.1

}

// 데이터 x가 저장된 노드 탐색
BinTree* searchBST(BinTree* bt, BTData x) {
	BinTree* p = bt;
	
	// Fill your code
	



}

// 데이터 x 저장
void insertBST(BinTree* bt, BTData x) {
	BinTree* p = bt;
	BinTree* parent = NULL;	
	
	// 삽입할 노드 탐색
	// Fill your code
	



	// 삽입할 노드 생성
	// Fill your code
	



	
	// 삽입 노드 연결
	// Fill your code





}

// 데이터 x 노드 삭제	
void deleteBST(BinTree* bt, BTData x) {
	// Fill your code
	



}	


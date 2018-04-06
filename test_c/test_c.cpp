// test_c.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>

typedef struct BTNode{
	int data;
	struct BTNode *lchild,*rchild;
}BTNode,*BTree;

int creatTree(BTree &T){
	int data=0;
	scanf("%d",&data);
	if(data){
		T=(BTree)malloc(sizeof(BTNode));	
		T->data=data;
		creatTree(T->lchild);
		creatTree(T->rchild);
	}
	else{
		T=NULL;
	}
	return 0;
}

void preOrder(BTree T){
	if(T){
		printf("%d ",T->data);
		preOrder(T->lchild);
		preOrder(T->rchild);
	}
}

int main(int argc, char* argv[])
{
	BTree T;
	creatTree(T);
	preOrder(T);
	scanf("%d");
	printf("Hello World!\n");
	return 0;
}


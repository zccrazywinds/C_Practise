#pragma once
#include <stdio.h>
#include <stdlib.h>

typedef struct {
	char data;
	struct BiNode *lChild, *rChild;
}BiNode, *BiTree;

void CreatBiTree(BiTree * T);
void PreOrderTravels(BiNode *P);
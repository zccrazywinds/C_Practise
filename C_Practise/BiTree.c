#include "BiTree.h"

void CreatBiTree(BiTree	 * T)
{
	char c;
	c = getch();
//	getchar();
	if (c == ' ')
		*T = NULL;
	else
	{
		*T = (BiNode *)malloc(sizeof(BiNode));
		if (!(*T)) exit(0);
		(*T)->data = c;
 		CreatBiTree(&((*T)->lChild));
		CreatBiTree(&((*T)->rChild)) ;
	}
}

void PreOrderTravels(BiNode * P)
{
	if (P)
	{

		printf("%c\n", P->data);
		PreOrderTravels(P->lChild);
		PreOrderTravels(P->rChild);
	}
}

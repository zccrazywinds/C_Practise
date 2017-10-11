#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "main.h"
#include "BiTree.h"
int main()
{
    BiTree S = NULL;
	CreatBiTree(&S);
	PreOrderTravels(S);
	//BinToDec();
 	getchar();
	return 0;
}
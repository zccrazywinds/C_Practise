#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "main.h"
int main()
{
	VNode G[5];
	CreatGraph(5, G);
	DFS(G, 0);
	getche();
	return 0;
}